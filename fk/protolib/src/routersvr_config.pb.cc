// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: routersvr_config.proto

#include "routersvr_config.pb.h"

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
class PolicyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Policy>
      _instance;
} _Policy_default_instance_;
class RouterSvrConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RouterSvrConfig>
      _instance;
} _RouterSvrConfig_default_instance_;
}  // namespace config
namespace protobuf_routersvr_5fconfig_2eproto {
void InitDefaultsPolicyImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::config::_Policy_default_instance_;
    new (ptr) ::config::Policy();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::Policy::InitAsDefaultInstance();
}

void InitDefaultsPolicy() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPolicyImpl);
}

void InitDefaultsRouterSvrConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_routersvr_5fconfig_2eproto::InitDefaultsPolicy();
  {
    void* ptr = &::config::_RouterSvrConfig_default_instance_;
    new (ptr) ::config::RouterSvrConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::RouterSvrConfig::InitAsDefaultInstance();
}

void InitDefaultsRouterSvrConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRouterSvrConfigImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::Policy, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::Policy, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::Policy, svr_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::Policy, policy_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, listen_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, svr_inst_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, legal_svr_list_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, policy_list_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterSvrConfig, zone_),
  0,
  1,
  ~0u,
  ~0u,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::config::Policy)},
  { 9, 19, sizeof(::config::RouterSvrConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_Policy_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_RouterSvrConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "routersvr_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026routersvr_config.proto\022\006config\"*\n\006Poli"
      "cy\022\020\n\010svr_type\030\001 \001(\r\022\016\n\006policy\030\002 \001(\r\"\204\001\n"
      "\017RouterSvrConfig\022\021\n\tlisten_ip\030\001 \001(\t\022\023\n\013s"
      "vr_inst_id\030\002 \001(\005\022\026\n\016legal_svr_list\030\003 \003(\005"
      "\022#\n\013policy_list\030\004 \003(\0132\016.config.Policy\022\014\n"
      "\004zone\030\005 \001(\005*X\n\nPolicyType\022\021\n\rPOLICY_ROUT"
      "ER\020\000\022\021\n\rPOLICY_RANDOM\020\001\022\016\n\nPOLICY_MOD\020\002\022"
      "\024\n\020POLICY_BROADCAST\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 301);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "routersvr_config.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_routersvr_5fconfig_2eproto
namespace config {
const ::google::protobuf::EnumDescriptor* PolicyType_descriptor() {
  protobuf_routersvr_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_routersvr_5fconfig_2eproto::file_level_enum_descriptors[0];
}
bool PolicyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Policy::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Policy::kSvrTypeFieldNumber;
const int Policy::kPolicyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Policy::Policy()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_routersvr_5fconfig_2eproto::InitDefaultsPolicy();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.Policy)
}
Policy::Policy(const Policy& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&svr_type_, &from.svr_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&policy_) -
    reinterpret_cast<char*>(&svr_type_)) + sizeof(policy_));
  // @@protoc_insertion_point(copy_constructor:config.Policy)
}

void Policy::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&svr_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&policy_) -
      reinterpret_cast<char*>(&svr_type_)) + sizeof(policy_));
}

Policy::~Policy() {
  // @@protoc_insertion_point(destructor:config.Policy)
  SharedDtor();
}

void Policy::SharedDtor() {
}

void Policy::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Policy::descriptor() {
  ::protobuf_routersvr_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_routersvr_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Policy& Policy::default_instance() {
  ::protobuf_routersvr_5fconfig_2eproto::InitDefaultsPolicy();
  return *internal_default_instance();
}

Policy* Policy::New(::google::protobuf::Arena* arena) const {
  Policy* n = new Policy;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Policy::Clear() {
// @@protoc_insertion_point(message_clear_start:config.Policy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&svr_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&policy_) -
        reinterpret_cast<char*>(&svr_type_)) + sizeof(policy_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Policy::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.Policy)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 svr_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_svr_type();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &svr_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 policy = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_policy();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &policy_)));
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
  // @@protoc_insertion_point(parse_success:config.Policy)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.Policy)
  return false;
#undef DO_
}

void Policy::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.Policy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 svr_type = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->svr_type(), output);
  }

  // optional uint32 policy = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->policy(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.Policy)
}

::google::protobuf::uint8* Policy::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.Policy)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 svr_type = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->svr_type(), target);
  }

  // optional uint32 policy = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->policy(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.Policy)
  return target;
}

size_t Policy::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.Policy)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional uint32 svr_type = 1;
    if (has_svr_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->svr_type());
    }

    // optional uint32 policy = 2;
    if (has_policy()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->policy());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Policy::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.Policy)
  GOOGLE_DCHECK_NE(&from, this);
  const Policy* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Policy>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.Policy)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.Policy)
    MergeFrom(*source);
  }
}

void Policy::MergeFrom(const Policy& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.Policy)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      svr_type_ = from.svr_type_;
    }
    if (cached_has_bits & 0x00000002u) {
      policy_ = from.policy_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Policy::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.Policy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Policy::CopyFrom(const Policy& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.Policy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Policy::IsInitialized() const {
  return true;
}

void Policy::Swap(Policy* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Policy::InternalSwap(Policy* other) {
  using std::swap;
  swap(svr_type_, other->svr_type_);
  swap(policy_, other->policy_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Policy::GetMetadata() const {
  protobuf_routersvr_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_routersvr_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void RouterSvrConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RouterSvrConfig::kListenIpFieldNumber;
const int RouterSvrConfig::kSvrInstIdFieldNumber;
const int RouterSvrConfig::kLegalSvrListFieldNumber;
const int RouterSvrConfig::kPolicyListFieldNumber;
const int RouterSvrConfig::kZoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RouterSvrConfig::RouterSvrConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_routersvr_5fconfig_2eproto::InitDefaultsRouterSvrConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.RouterSvrConfig)
}
RouterSvrConfig::RouterSvrConfig(const RouterSvrConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      legal_svr_list_(from.legal_svr_list_),
      policy_list_(from.policy_list_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_listen_ip()) {
    listen_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.listen_ip_);
  }
  ::memcpy(&svr_inst_id_, &from.svr_inst_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&zone_) -
    reinterpret_cast<char*>(&svr_inst_id_)) + sizeof(zone_));
  // @@protoc_insertion_point(copy_constructor:config.RouterSvrConfig)
}

void RouterSvrConfig::SharedCtor() {
  _cached_size_ = 0;
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&svr_inst_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&zone_) -
      reinterpret_cast<char*>(&svr_inst_id_)) + sizeof(zone_));
}

RouterSvrConfig::~RouterSvrConfig() {
  // @@protoc_insertion_point(destructor:config.RouterSvrConfig)
  SharedDtor();
}

void RouterSvrConfig::SharedDtor() {
  listen_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RouterSvrConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RouterSvrConfig::descriptor() {
  ::protobuf_routersvr_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_routersvr_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RouterSvrConfig& RouterSvrConfig::default_instance() {
  ::protobuf_routersvr_5fconfig_2eproto::InitDefaultsRouterSvrConfig();
  return *internal_default_instance();
}

RouterSvrConfig* RouterSvrConfig::New(::google::protobuf::Arena* arena) const {
  RouterSvrConfig* n = new RouterSvrConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RouterSvrConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:config.RouterSvrConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  legal_svr_list_.Clear();
  policy_list_.Clear();
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

bool RouterSvrConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.RouterSvrConfig)
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
            "config.RouterSvrConfig.listen_ip");
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

      // repeated int32 legal_svr_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24u, input, this->mutable_legal_svr_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_legal_svr_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .config.Policy policy_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_policy_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 zone = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
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
  // @@protoc_insertion_point(parse_success:config.RouterSvrConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.RouterSvrConfig)
  return false;
#undef DO_
}

void RouterSvrConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.RouterSvrConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.RouterSvrConfig.listen_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->listen_ip(), output);
  }

  // optional int32 svr_inst_id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->svr_inst_id(), output);
  }

  // repeated int32 legal_svr_list = 3;
  for (int i = 0, n = this->legal_svr_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->legal_svr_list(i), output);
  }

  // repeated .config.Policy policy_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->policy_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->policy_list(static_cast<int>(i)), output);
  }

  // optional int32 zone = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->zone(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.RouterSvrConfig)
}

::google::protobuf::uint8* RouterSvrConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.RouterSvrConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.RouterSvrConfig.listen_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->listen_ip(), target);
  }

  // optional int32 svr_inst_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->svr_inst_id(), target);
  }

  // repeated int32 legal_svr_list = 3;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteInt32ToArray(3, this->legal_svr_list_, target);

  // repeated .config.Policy policy_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->policy_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->policy_list(static_cast<int>(i)), deterministic, target);
  }

  // optional int32 zone = 5;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->zone(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.RouterSvrConfig)
  return target;
}

size_t RouterSvrConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.RouterSvrConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated int32 legal_svr_list = 3;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->legal_svr_list_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->legal_svr_list_size());
    total_size += data_size;
  }

  // repeated .config.Policy policy_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->policy_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->policy_list(static_cast<int>(i)));
    }
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

    // optional int32 zone = 5;
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

void RouterSvrConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.RouterSvrConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const RouterSvrConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RouterSvrConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.RouterSvrConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.RouterSvrConfig)
    MergeFrom(*source);
  }
}

void RouterSvrConfig::MergeFrom(const RouterSvrConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.RouterSvrConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  legal_svr_list_.MergeFrom(from.legal_svr_list_);
  policy_list_.MergeFrom(from.policy_list_);
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

void RouterSvrConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.RouterSvrConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RouterSvrConfig::CopyFrom(const RouterSvrConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.RouterSvrConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RouterSvrConfig::IsInitialized() const {
  return true;
}

void RouterSvrConfig::Swap(RouterSvrConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RouterSvrConfig::InternalSwap(RouterSvrConfig* other) {
  using std::swap;
  legal_svr_list_.InternalSwap(&other->legal_svr_list_);
  policy_list_.InternalSwap(&other->policy_list_);
  listen_ip_.Swap(&other->listen_ip_);
  swap(svr_inst_id_, other->svr_inst_id_);
  swap(zone_, other->zone_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RouterSvrConfig::GetMetadata() const {
  protobuf_routersvr_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_routersvr_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config

// @@protoc_insertion_point(global_scope)
