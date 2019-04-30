#! /usr/bin/env python
# coding=utf-8

import xlrd
import sys
import os
import platform

from loghelper import LOG_DEBUG
from loghelper import LOG_INFO
from loghelper import LOG_WARN
from loghelper import LOG_ERROR
from loghelper import Color

reload(sys)
sys.setdefaultencoding("utf-8")

# TAP的空格数
TAP_BLANK_NUM = 4

OUTPUT_FULE_PATH_BASE = "dataconfig_"
g_pb_file_name = ""
g_struct_name = ""


class SheetInterpreter:
    """通过excel配置生成配置的protobuf定义文件"""

    def __init__(self, file_path, sheet_name):
        self._file_path = file_path
        self._sheet_name = sheet_name

        # open file
        try:
            self._workbook = xlrd.open_workbook(self._file_path)
        except BaseException, e:
            LOG_ERROR("open xls file(%s) failed" % (self._file_path))
            raise

        # get sheet
        try:
            self._sheet = self._workbook.sheet_by_name(self._sheet_name)
        except BaseException, e:
            LOG_ERROR("open the sheet(%s) in(%s) failed" % (self._sheet_name, self._file_path))

        # 行数和列数
        self._row_count = len(self._sheet.col_values(0))
        self._col_count = len(self._sheet.row_values(0))
        LOG_INFO("row_count:%d, col_count:%d" % (self._row_count, self._col_count))

        self._row = 0
        self._col = 0

        # 将所有的输出先写到一个list， 最后统一写到文件
        self._output = []
        # 排版缩进空格数
        self._indentation = 0
        # field number 结构嵌套时使用列表
        # 新增一个结构，行增一个元素，结构定义完成后弹出
        self._field_index_list = [1]
        # 当前行是否输出，避免相同结构重复定义
        self._is_layout = True
        # 保存所有结构的名字
        self._struct_name_list = []

        bpos = file_path.rfind("/")
        if bpos < 0:
            bpos = 0
        else:
            bpos += 1
        epos = file_path.rfind(".")
        if epos < 0:
            epos = 0
        global g_struct_name
        g_struct_name = file_path[bpos: epos].lower() + "_conf"
        global g_pb_file_name
        g_pb_file_name = OUTPUT_FULE_PATH_BASE + g_struct_name + ".proto"

        self._repeated_name_now = {}

    def interpreted(self):
        """对外的接口"""
        LOG_INFO("begin Interpreter, row_count = %d, col_count = %d", self._row_count, self._col_count)

        self._LayoutFileHeader()
        self._output.append("package dataconfig;\n")

        global g_struct_name
        self._LayoutStructHead(g_struct_name)
        self._IncreaseIndentation()

        while self._col < self._col_count:
            self._FieldDefine()

        self._DecreaseIndentation()
        self._LayoutStructTail()
        self._LayoutArray()
        self._Write2File()

        # 将PB转换成py格式
        try:
            if platform.system() == "Windows":
                command = "..\\bin\\protoc.exe --proto_path=./proto --python_out=./proto " + g_pb_file_name
                os.system(command)
            else:
                command = "cd proto; protoc --python_out=. " + g_pb_file_name
                os.system(command)
        except BaseException, e:
            LOG_ERROR("protoc failed!")
            raise

    def _FieldDefine(self):
        LOG_INFO("row=%d, col=%d", self._row, self._col)

        scope = self._sheet.cell_value(1, self._col)
        if str(scope) != "all" and str(scope) != "server":
            self._col += 1
            return

        field_rule = str(self._sheet.cell_value(2, self._col))
        field_name = str(self._sheet.cell_value(0, self._col))
        proto_rule = "optional"

        field_type = field_rule
        if field_rule.startswith("array"):
            proto_rule = "repeated"
            if field_name.find("[") >= 0:
                field_name = field_name[0: field_name.find("[")]
                if field_name in self._repeated_name_now:
                    self._col += 1
                    return
                self._repeated_name_now[field_name] = 1
            else:
                self._repeated_name_now = field_name;
            if field_rule.find("int32") >= 0:
                field_type = "int32"
            elif field_rule.find("float") >= 0:
                field_type = "float"
            elif field_rule.find("string") >= 0:
                field_type = "string"
            else:
                LOG_ERROR("parse field_type error col{%d}" % (self._col))

        if field_name.endswith("_dt"):
            field_type = "DateTime"

        field_comment = ""
        LOG_INFO("%s|%s|%s|%s", field_rule, field_type, field_name, field_comment)

        comment = field_comment.encode("utf-8")
        self._LayoutComment(comment)

        self._LayoutOneField(proto_rule, field_type, field_name)

        self._col += 1
        return

    def _LayoutFileHeader(self):
        """生成PB文件的描述信息"""
        self._output.append("/**\n")
        self._output.append("* @brief:  这个文件是通过工具自动生成的，建议不要手动修改\n")
        self._output.append("*/\n")
        self._output.append("\n")

    def _LayoutStructHead(self, struct_name):
        """生成结构头"""
        if not self._is_layout:
            return
        self._output.append("\n")
        self._output.append(" " * self._indentation + "message " + struct_name + "{\n")

    def _LayoutStructTail(self):
        """生成结构尾"""
        if not self._is_layout:
            return
        self._output.append(" " * self._indentation + "}\n")
        self._output.append("\n")

    def _LayoutComment(self, comment):
        # 改用C风格的注释，防止会有分行
        if not self._is_layout:
            return
        if comment.count("\n") > 1:
            if comment[-1] != '\n':
                comment = comment + "\n"
                comment = comment.replace("\n", "\n" + " " * (self._indentation + TAP_BLANK_NUM),
                                          comment.count("\n") - 1)
                self._output.append(" " * self._indentation + "/** " + comment + " " * self._indentation + "*/\n")
        else:
            self._output.append(" " * self._indentation + "/** " + comment + " */\n")

    def _LayoutOneField(self, field_rule, field_type, field_name):
        """输出一行定义"""
        if not self._is_layout:
            return
        if field_name.find('=') > 0:
            name_and_value = field_name.split('=')
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " " + str(name_and_value[0]).strip() + " = " + self._GetAndAddFieldIndex() \
                                + " [default = " + str(name_and_value[1]).strip() + "]" + ";\n")
            return

        if (field_rule != "required" and field_rule != "optional"):
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " " + field_name + " = " + self._GetAndAddFieldIndex() + ";\n")
            return

        if field_type == "int32" or field_type == "int64" \
                or field_type == "uint32" or field_type == "uint64" \
                or field_type == "sint32" or field_type == "sint64" \
                or field_type == "fixed32" or field_type == "fixed64" \
                or field_type == "sfixed32" or field_type == "sfixed64" \
                or field_type == "double" or field_type == "float":
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " " + field_name + " = " + self._GetAndAddFieldIndex() \
                                + " [default = 0]" + ";\n")
        elif field_type == "string" or field_type == "bytes":
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " " + field_name + " = " + self._GetAndAddFieldIndex() \
                                + " [default = \"\"]" + ";\n")
        elif field_type == "DateTime":
            field_type = "uint64"
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " /*DateTime*/ " + field_name + " = " + self._GetAndAddFieldIndex() \
                                + " [default = 0]" + ";\n")
        elif field_type == "TimeDuration":
            field_type = "uint64"
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " /*TimeDuration*/ " + field_name + " = " + self._GetAndAddFieldIndex() \
                                + " [default = 0]" + ";\n")
        else:
            self._output.append(" " * self._indentation + field_rule + " " + field_type \
                                + " " + field_name + " = " + self._GetAndAddFieldIndex() + ";\n")
        return

    def _IncreaseIndentation(self):
        """增加缩进"""
        self._indentation += TAP_BLANK_NUM

    def _DecreaseIndentation(self):
        """减少缩进"""
        self._indentation -= TAP_BLANK_NUM

    def _GetAndAddFieldIndex(self):
        """获得字段的序号, 并将序号增加"""
        index = str(self._field_index_list[- 1])
        self._field_index_list[-1] += 1
        return index

    def _LayoutArray(self):
        """输出数组定义"""
        global g_struct_name
        self._output.append("message " + g_struct_name + "_array {\n")
        self._output.append("    repeated " + g_struct_name + " items = 1;\n}\n")

    def _Write2File(self):
        """输出到文件"""
        dir = './proto/'
        if not os.path.exists(dir):
            os.makedirs(dir)
        pb_file = open(dir + g_pb_file_name, "w+")
        pb_file.writelines(self._output)
        pb_file.close()


class DataParser:
    """解析excel的数据"""

    def __init__(self, xls_file_path, sheet_name):
        self._xls_file_path = xls_file_path
        self._sheet_name = sheet_name

        try:
            self._workbook = xlrd.open_workbook(self._xls_file_path)
        except BaseException, e:
            LOG_ERROR("open xls file(%s) failed" % (self._xls_file_path))
            raise

        try:
            self._sheet = self._workbook.sheet_by_name(self._sheet_name)
        except BaseException, e:
            LOG_ERROR("open the sheet(%s) in(%s) failed" % (self._sheet_name, self._xls_file_path))
            raise

        self._row_count = len(self._sheet.col_values(0))
        self._col_count = len(self._sheet.row_values(0))

        self._row = 0
        self._col = 0

        try:
            global g_pb_file_name
            self._module_name = g_pb_file_name.replace(".proto", "_pb2");
            sys.path.append(os.getcwd() + "/proto")
            if not os.path.exists('./proto/' + self._module_name + '.py'):
                LOG_INFO("file not exist")

            exec ('from ' + self._module_name + ' import *');
            self._module = sys.modules[self._module_name]
        except BaseException, e:
            LOG_ERROR("load module(%s) failed" % (self._module_name))
            raise

    def Parse(self):
        """对外的接口:解析数据"""
        LOG_INFO("begin parse, row_count = %d, col_count = %d", self._row_count, self._col_count)

        global g_struct_name
        item_array = getattr(self._module, g_struct_name + '_array')()

        # 先找到定义ID的列
        id_col = 0
        for id_col in range(0, self._col_count):
            info_id = str(self._sheet.cell_value(self._row, id_col)).strip()
            if info_id == "":
                continue
            else:
                break

        for self._row in range(3, self._row_count):
            # 如果 id 是 空 直接跳过改行
            info_id = str(self._sheet.cell_value(self._row, id_col)).strip()
            if info_id == "":
                LOG_WARN("%d is None", self._row)
                continue
            item = item_array.items.add()
            self._ParseLine(item)

        # LOG_INFO("parse result:\n%s", item_array)

        self._WriteReadableData2File(str(item_array))
        data = item_array.SerializeToString()
        self._WriteData2File(data)

    def _ParseLine(self, item):
        LOG_INFO("%d", self._row)

        self._col = 0
        while self._col < self._col_count:
            self._ParseField(0, 0, item)

    def _ParseField(self, max_repeated_num, repeated_num, item):
        scope = self._sheet.cell_value(1, self._col)
        if str(scope) != "all" and str(scope) != "server":
            self._col += 1
            return

        field_rule = str(self._sheet.cell_value(2, self._col))
        field_name = str(self._sheet.cell_value(0, self._col))
        proto_rule = "optional"

        field_type = field_rule
        if field_rule.startswith("array"):
            proto_rule = "repeated"
            if field_name.find("[") >= 0:
                field_name = field_name[0: field_name.find("[")]

            if field_rule.find("int32") >= 0:
                field_type = "int32"
            elif field_rule.find("float") >= 0:
                field_type = "float"
            elif field_rule.find("string") >= 0:
                field_type = "string"
            else:
                LOG_ERROR("parse field_type error col{%d}" % (self._col))

        # 这里由于前端不支持直接配置时间类型,所以只能用名字后缀来区别
        if field_name.endswith("_dt"):
            field_type = "DateTime"

        if proto_rule == "required" or proto_rule == "optional":

            LOG_INFO("%d|%d", self._row, self._col)
            LOG_INFO("%s|%s|%s", field_rule, field_type, field_name)

            field_value = self._GetFieldValue(field_type, self._row, self._col)
            # 有value才设值
            if field_value != None:
                item.__setattr__(field_name, field_value)
            self._col += 1

        elif proto_rule == "repeated":
            # 2011-11-29 修改
            # 若repeated第二行是类型定义，则表示当前字段是repeated，并且数据在单列用分好相隔

            field_value = self._GetFieldValue(field_type, self._row, self._col)
            item.__getattribute__(field_name).append(int(float(field_value)))
            self._col += 1
            return

        else:
            self._col += 1
            return

    def _GetFieldValue(self, field_type, row, col):
        """将pb类型转换为python类型"""

        field_value = self._sheet.cell_value(row, col)
        LOG_INFO("%d|%d|%s", row, col, field_value)

        try:
            if field_type == "int32" or field_type == "int64" \
                    or field_type == "uint32" or field_type == "uint64" \
                    or field_type == "sint32" or field_type == "sint64" \
                    or field_type == "fixed32" or field_type == "fixed64" \
                    or field_type == "sfixed32" or field_type == "sfixed64":
                if len(str(field_value).strip()) <= 0:
                    return None
                else:
                    return int(field_value)
            elif field_type == "double" or field_type == "float":
                if len(str(field_value).strip()) <= 0:
                    return None
                else:
                    return float(field_value)
            elif field_type == "string":
                field_value = unicode(field_value)
                if len(field_value) <= 0:
                    return None
                else:
                    return field_value
            elif field_type == "bytes":
                field_value = unicode(field_value).encode('utf-8')
                if len(field_value) <= 0:
                    return None
                else:
                    return field_value
            elif field_type == "DateTime":
                field_value = unicode(field_value).encode('utf-8')
                if len(field_value) <= 0:
                    return 0
                else:
                    import time
                    #                    field_value += " EDT"
                    #                    time_struct = time.strptime(field_value, "%Y-%m-%d %H:%M:%S %Z")
                    time_struct = time.strptime(field_value, "%Y-%m-%d %H:%M:%S")
                    # UTC time
                    time_stamp = int(time.mktime(time_struct))
                    return time_stamp
            elif field_type == "TimeDuration":
                field_value = unicode(field_value).encode('utf-8')
                if len(field_value) <= 0:
                    return 0
                else:
                    import datetime
                    import time
                    time_struct = 0
                    try:
                        time_struct = time.strptime(field_value, "%HH")
                    except BaseException, e:
                        time_struct = time.strptime(field_value, "%jD%HH")
                    return 3600 * (time_struct.tm_yday * 24 + time_struct.tm_hour)
            else:
                return None
        except BaseException, e:
            LOG_ERROR("parse cell(%u, %u) error, please check it, maybe type is wrong." % (row, col))
            raise

    def _WriteData2File(self, data):
        dir = './data/'
        if not os.path.exists(dir):
            os.makedirs(dir)
        file_name = dir + OUTPUT_FULE_PATH_BASE + g_struct_name + ".data"
        file = open(file_name, 'wb+')
        file.write(data)
        file.close()

    def _WriteReadableData2File(self, data):
        dir = './data/'
        if not os.path.exists(dir):
            os.makedirs(dir)
        file_name = dir + OUTPUT_FULE_PATH_BASE + g_struct_name + ".conf"
        file = open(file_name, 'wb+')
        file.write(data)
        file.close()


"""
开始函数
"""
if __name__ == '__main__':
    if len(sys.argv) < 3:
        LOG_ERROR("Usage: param is too less for translate sheet")
        sys.exit(-1)

    sheet_name = sys.argv[1]
    file_path = sys.argv[2]
    base_file_path = os.path.basename(file_path)
    if base_file_path.startswith("X_") != True:
        LOG_ERROR("%s file name should start with X_" % (base_file_path))
        sys.exit(-1)

    try:
        LOG_INFO("begin interpreted %s file" % (file_path))
        interpreter = SheetInterpreter(file_path, sheet_name)
        interpreter.interpreted()
        parser = DataParser(file_path, sheet_name)
        parser.Parse()
        LOG_INFO("end interpreted %s file" % (file_path))
        LOG_INFO("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    except BaseException, e:
        LOG_ERROR("Interpreted %s Failed!!!" % (file_path))
        LOG_ERROR("col: ", interpreter._col + 1, "ERROR: ", e, Color.NONE)
        sys.exit(-1)
