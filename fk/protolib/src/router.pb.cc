// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: router.proto

#include "router.pb.h"

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
class RouterInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RouterInfo>
      _instance;
} _RouterInfo_default_instance_;
class RouterConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RouterConfig>
      _instance;
} _RouterConfig_default_instance_;
}  // namespace config
namespace protobuf_router_2eproto {
void InitDefaultsRouterInfoImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::config::_RouterInfo_default_instance_;
    new (ptr) ::config::RouterInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::RouterInfo::InitAsDefaultInstance();
}

void InitDefaultsRouterInfo() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRouterInfoImpl);
}

void InitDefaultsRouterConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_router_2eproto::InitDefaultsRouterInfo();
  {
    void* ptr = &::config::_RouterConfig_default_instance_;
    new (ptr) ::config::RouterConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::config::RouterConfig::InitAsDefaultInstance();
}

void InitDefaultsRouterConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRouterConfigImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, listen_ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, listen_port_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, number_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterInfo, server_zone_),
  0,
  1,
  2,
  3,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::config::RouterConfig, router_list_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::config::RouterInfo)},
  { 13, 19, sizeof(::config::RouterConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_RouterInfo_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::config::_RouterConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "router.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
      "\n\014router.proto\022\006config\"Y\n\nRouterInfo\022\021\n\t"
      "listen_ip\030\001 \001(\t\022\023\n\013listen_port\030\002 \001(\005\022\016\n\006"
      "number\030\003 \001(\005\022\023\n\013server_zone\030\004 \001(\005\"7\n\014Rou"
      "terConfig\022\'\n\013router_list\030\001 \003(\0132\022.config."
      "RouterInfo"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "router.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_router_2eproto
namespace config {

// ===================================================================

void RouterInfo::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RouterInfo::kListenIpFieldNumber;
const int RouterInfo::kListenPortFieldNumber;
const int RouterInfo::kNumberFieldNumber;
const int RouterInfo::kServerZoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RouterInfo::RouterInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_router_2eproto::InitDefaultsRouterInfo();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.RouterInfo)
}
RouterInfo::RouterInfo(const RouterInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_listen_ip()) {
    listen_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.listen_ip_);
  }
  ::memcpy(&listen_port_, &from.listen_port_,
    static_cast<size_t>(reinterpret_cast<char*>(&server_zone_) -
    reinterpret_cast<char*>(&listen_port_)) + sizeof(server_zone_));
  // @@protoc_insertion_point(copy_constructor:config.RouterInfo)
}

void RouterInfo::SharedCtor() {
  _cached_size_ = 0;
  listen_ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&listen_port_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&server_zone_) -
      reinterpret_cast<char*>(&listen_port_)) + sizeof(server_zone_));
}

RouterInfo::~RouterInfo() {
  // @@protoc_insertion_point(destructor:config.RouterInfo)
  SharedDtor();
}

void RouterInfo::SharedDtor() {
  listen_ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RouterInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RouterInfo::descriptor() {
  ::protobuf_router_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_router_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RouterInfo& RouterInfo::default_instance() {
  ::protobuf_router_2eproto::InitDefaultsRouterInfo();
  return *internal_default_instance();
}

RouterInfo* RouterInfo::New(::google::protobuf::Arena* arena) const {
  RouterInfo* n = new RouterInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RouterInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:config.RouterInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!listen_ip_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*listen_ip_.UnsafeRawStringPointer())->clear();
  }
  if (cached_has_bits & 14u) {
    ::memset(&listen_port_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&server_zone_) -
        reinterpret_cast<char*>(&listen_port_)) + sizeof(server_zone_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RouterInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.RouterInfo)
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
            "config.RouterInfo.listen_ip");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 listen_port = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_listen_port();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &listen_port_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 number = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_number();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &number_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 server_zone = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_server_zone();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &server_zone_)));
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
  // @@protoc_insertion_point(parse_success:config.RouterInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.RouterInfo)
  return false;
#undef DO_
}

void RouterInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.RouterInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.RouterInfo.listen_ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->listen_ip(), output);
  }

  // optional int32 listen_port = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->listen_port(), output);
  }

  // optional int32 number = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->number(), output);
  }

  // optional int32 server_zone = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->server_zone(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.RouterInfo)
}

::google::protobuf::uint8* RouterInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.RouterInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string listen_ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->listen_ip().data(), static_cast<int>(this->listen_ip().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "config.RouterInfo.listen_ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->listen_ip(), target);
  }

  // optional int32 listen_port = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->listen_port(), target);
  }

  // optional int32 number = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->number(), target);
  }

  // optional int32 server_zone = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->server_zone(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.RouterInfo)
  return target;
}

size_t RouterInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.RouterInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional string listen_ip = 1;
    if (has_listen_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->listen_ip());
    }

    // optional int32 listen_port = 2;
    if (has_listen_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->listen_port());
    }

    // optional int32 number = 3;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->number());
    }

    // optional int32 server_zone = 4;
    if (has_server_zone()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->server_zone());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RouterInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.RouterInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const RouterInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RouterInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.RouterInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.RouterInfo)
    MergeFrom(*source);
  }
}

void RouterInfo::MergeFrom(const RouterInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.RouterInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_listen_ip();
      listen_ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.listen_ip_);
    }
    if (cached_has_bits & 0x00000002u) {
      listen_port_ = from.listen_port_;
    }
    if (cached_has_bits & 0x00000004u) {
      number_ = from.number_;
    }
    if (cached_has_bits & 0x00000008u) {
      server_zone_ = from.server_zone_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RouterInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.RouterInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RouterInfo::CopyFrom(const RouterInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.RouterInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RouterInfo::IsInitialized() const {
  return true;
}

void RouterInfo::Swap(RouterInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RouterInfo::InternalSwap(RouterInfo* other) {
  using std::swap;
  listen_ip_.Swap(&other->listen_ip_);
  swap(listen_port_, other->listen_port_);
  swap(number_, other->number_);
  swap(server_zone_, other->server_zone_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RouterInfo::GetMetadata() const {
  protobuf_router_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_router_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void RouterConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RouterConfig::kRouterListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RouterConfig::RouterConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_router_2eproto::InitDefaultsRouterConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:config.RouterConfig)
}
RouterConfig::RouterConfig(const RouterConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      router_list_(from.router_list_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:config.RouterConfig)
}

void RouterConfig::SharedCtor() {
  _cached_size_ = 0;
}

RouterConfig::~RouterConfig() {
  // @@protoc_insertion_point(destructor:config.RouterConfig)
  SharedDtor();
}

void RouterConfig::SharedDtor() {
}

void RouterConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RouterConfig::descriptor() {
  ::protobuf_router_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_router_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RouterConfig& RouterConfig::default_instance() {
  ::protobuf_router_2eproto::InitDefaultsRouterConfig();
  return *internal_default_instance();
}

RouterConfig* RouterConfig::New(::google::protobuf::Arena* arena) const {
  RouterConfig* n = new RouterConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RouterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:config.RouterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  router_list_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RouterConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:config.RouterConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .config.RouterInfo router_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_router_list()));
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
  // @@protoc_insertion_point(parse_success:config.RouterConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:config.RouterConfig)
  return false;
#undef DO_
}

void RouterConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:config.RouterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .config.RouterInfo router_list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->router_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->router_list(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:config.RouterConfig)
}

::google::protobuf::uint8* RouterConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:config.RouterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .config.RouterInfo router_list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->router_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->router_list(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.RouterConfig)
  return target;
}

size_t RouterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.RouterConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .config.RouterInfo router_list = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->router_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->router_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RouterConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:config.RouterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const RouterConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RouterConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:config.RouterConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:config.RouterConfig)
    MergeFrom(*source);
  }
}

void RouterConfig::MergeFrom(const RouterConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.RouterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  router_list_.MergeFrom(from.router_list_);
}

void RouterConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:config.RouterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RouterConfig::CopyFrom(const RouterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.RouterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RouterConfig::IsInitialized() const {
  return true;
}

void RouterConfig::Swap(RouterConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RouterConfig::InternalSwap(RouterConfig* other) {
  using std::swap;
  router_list_.InternalSwap(&other->router_list_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RouterConfig::GetMetadata() const {
  protobuf_router_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_router_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace config

// @@protoc_insertion_point(global_scope)
