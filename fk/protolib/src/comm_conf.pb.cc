// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: comm_conf.proto

#include "comm_conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace config {
class CommConfDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CommConf>
      _instance;
} _CommConf_default_instance_;
}  // namespace config
namespace protobuf_comm_5fconf_2eproto {
void InitDefaultsCommConfImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::config::_CommConf_default_instance_;
    new (ptr) ::config::CommConf();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::CommConf::InitAsDefaultInstance();
}

void InitDefaultsCommConf() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsCommConfImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::CommConf, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::CommConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::CommConf, router_conf_file_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::config::CommConf)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_CommConf_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "comm_conf.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\017comm_conf.proto\022\006config\"$\n\010CommConf\022\030\n"
      "\020router_conf_file\030\001 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "comm_conf.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_comm_5fconf_2eproto
namespace config {

// ===================================================================

void CommConf::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CommConf::kRouterConfFileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CommConf::CommConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_comm_5fconf_2eproto::InitDefaultsCommConf();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.CommConf)
}
CommConf::CommConf(const CommConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  router_conf_file_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_router_conf_file()) {
    router_conf_file_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.router_conf_file_);
  }
  // @@protoc_insertion_point(copy_constructor:config.CommConf)
}

void CommConf::SharedCtor() {
  _cached_size_ = 0;
  router_conf_file_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CommConf::~CommConf() {
  // @@protoc_insertion_point(destructor:config.CommConf)
  SharedDtor();
}

void CommConf::SharedDtor() {
  router_conf_file_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CommConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CommConf::descriptor() {
  ::protobuf_comm_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_comm_5fconf_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CommConf& CommConf::default_instance() {
  ::protobuf_comm_5fconf_2eproto::InitDefaultsCommConf();
  return *internal_default_instance();
}

CommConf* CommConf::New(::google::protobuf::Arena* arena) const {
  CommConf* n = new CommConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CommConf::Clear() {
// @@protoc_insertion_point(message_clear_start:config.CommConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!router_conf_file_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*router_conf_file_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CommConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.CommConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string router_conf_file = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_router_conf_file()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->router_conf_file().data(), static_cast<int>(this->router_conf_file().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "config.CommConf.router_conf_file");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:config.CommConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.CommConf)
  return false;
#undef DO_
}

void CommConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.CommConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string router_conf_file = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->router_conf_file().data(), static_cast<int>(this->router_conf_file().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.CommConf.router_conf_file");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->router_conf_file(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.CommConf)
}

::google::protobuf::uint8* CommConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.CommConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string router_conf_file = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->router_conf_file().data(), static_cast<int>(this->router_conf_file().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.CommConf.router_conf_file");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->router_conf_file(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.CommConf)
  return target;
}

size_t CommConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.CommConf)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional string router_conf_file = 1;
  if (has_router_conf_file()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->router_conf_file());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CommConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.CommConf)
  GOOGLE_DCHECK_NE(&from, this);
  const CommConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CommConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.CommConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.CommConf)
    MergeFrom(*source);
  }
}

void CommConf::MergeFrom(const CommConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.CommConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_router_conf_file()) {
    set_has_router_conf_file();
    router_conf_file_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.router_conf_file_);
  }
}

void CommConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.CommConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommConf::CopyFrom(const CommConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.CommConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommConf::IsInitialized() const {
  return true;
}

void CommConf::Swap(CommConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CommConf::InternalSwap(CommConf* other) {
  using std::swap;
  router_conf_file_.Swap(&other->router_conf_file_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CommConf::GetMetadata() const {
  protobuf_comm_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_comm_5fconf_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config

// @@protoc_insertion_point(global_scope)
