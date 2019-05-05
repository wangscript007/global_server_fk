// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transfer.proto

#include "transfer.pb.h"

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
class TransferConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TransferConfig>
      _instance;
} _TransferConfig_default_instance_;
}  // namespace config
namespace protobuf_transfer_2eproto {
void InitDefaultsTransferConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::config::_TransferConfig_default_instance_;
    new (ptr) ::config::TransferConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::TransferConfig::InitAsDefaultInstance();
}

void InitDefaultsTransferConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTransferConfigImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::TransferConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::TransferConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::TransferConfig, listen_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::TransferConfig, svr_inst_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::TransferConfig, zone_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::config::TransferConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_TransferConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "transfer.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\016transfer.proto\022\006config\"F\n\016TransferConf"
      "ig\022\021\n\tlisten_ip\030\001 \001(\t\022\023\n\013svr_inst_id\030\002 \001"
      "(\005\022\014\n\004zone\030\003 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "transfer.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_transfer_2eproto
namespace config {

// ===================================================================

void TransferConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TransferConfig::kListenIpFieldNumber;
const int TransferConfig::kSvrInstIdFieldNumber;
const int TransferConfig::kZoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TransferConfig::TransferConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_transfer_2eproto::InitDefaultsTransferConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.TransferConfig)
}
TransferConfig::TransferConfig(const TransferConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_listen_ip()) {
    listen_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.listen_ip_);
  }
  ::memcpy(&svr_inst_id_, &from.svr_inst_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&zone_) -
    reinterpret_cast<char*>(&svr_inst_id_)) + sizeof(zone_));
  // @@protoc_insertion_point(copy_constructor:config.TransferConfig)
}

void TransferConfig::SharedCtor() {
  _cached_size_ = 0;
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&svr_inst_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&zone_) -
      reinterpret_cast<char*>(&svr_inst_id_)) + sizeof(zone_));
}

TransferConfig::~TransferConfig() {
  // @@protoc_insertion_point(destructor:config.TransferConfig)
  SharedDtor();
}

void TransferConfig::SharedDtor() {
  listen_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TransferConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TransferConfig::descriptor() {
  ::protobuf_transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_transfer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TransferConfig& TransferConfig::default_instance() {
  ::protobuf_transfer_2eproto::InitDefaultsTransferConfig();
  return *internal_default_instance();
}

TransferConfig* TransferConfig::New(::google::protobuf::Arena* arena) const {
  TransferConfig* n = new TransferConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TransferConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:config.TransferConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!listen_ip_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*listen_ip_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 6u) {
    ::memset(&svr_inst_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&zone_) -
        reinterpret_cast<char*>(&svr_inst_id_)) + sizeof(zone_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TransferConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.TransferConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string listen_ip = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_listen_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "config.TransferConfig.listen_ip");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 svr_inst_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_svr_inst_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &svr_inst_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 zone = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_zone();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &zone_)));
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
  // @@protoc_insertion_point(parse_success:config.TransferConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.TransferConfig)
  return false;
#undef DO_
}

void TransferConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.TransferConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.TransferConfig.listen_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->listen_ip(), output);
  }

  // optional int32 svr_inst_id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->svr_inst_id(), output);
  }

  // optional int32 zone = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->zone(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.TransferConfig)
}

::google::protobuf::uint8* TransferConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.TransferConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.TransferConfig.listen_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->listen_ip(), target);
  }

  // optional int32 svr_inst_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->svr_inst_id(), target);
  }

  // optional int32 zone = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->zone(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.TransferConfig)
  return target;
}

size_t TransferConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.TransferConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string listen_ip = 1;
    if (has_listen_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->listen_ip());
    }

    // optional int32 svr_inst_id = 2;
    if (has_svr_inst_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->svr_inst_id());
    }

    // optional int32 zone = 3;
    if (has_zone()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->zone());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TransferConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.TransferConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const TransferConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TransferConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.TransferConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.TransferConfig)
    MergeFrom(*source);
  }
}

void TransferConfig::MergeFrom(const TransferConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.TransferConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_listen_ip();
      listen_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.listen_ip_);
    }
    if (cached_has_bits & 0x00000002u) {
      svr_inst_id_ = from.svr_inst_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      zone_ = from.zone_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void TransferConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.TransferConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TransferConfig::CopyFrom(const TransferConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.TransferConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TransferConfig::IsInitialized() const {
  return true;
}

void TransferConfig::Swap(TransferConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TransferConfig::InternalSwap(TransferConfig* other) {
  using std::swap;
  listen_ip_.Swap(&other->listen_ip_);
  swap(svr_inst_id_, other->svr_inst_id_);
  swap(zone_, other->zone_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TransferConfig::GetMetadata() const {
  protobuf_transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_transfer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config

// @@protoc_insertion_point(global_scope)
