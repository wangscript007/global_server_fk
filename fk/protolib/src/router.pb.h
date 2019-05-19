// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: router.proto

#ifndef PROTOBUF_router_2eproto__INCLUDED
#define PROTOBUF_router_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_router_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRouterInfoImpl();
void InitDefaultsRouterInfo();
void InitDefaultsRouterConfigImpl();
void InitDefaultsRouterConfig();
inline void InitDefaults() {
  InitDefaultsRouterInfo();
  InitDefaultsRouterConfig();
}
}  // namespace protobuf_router_2eproto
namespace config {
class RouterConfig;
class RouterConfigDefaultTypeInternal;
extern RouterConfigDefaultTypeInternal _RouterConfig_default_instance_;
class RouterInfo;
class RouterInfoDefaultTypeInternal;
extern RouterInfoDefaultTypeInternal _RouterInfo_default_instance_;
}  // namespace config
namespace config {

// ===================================================================

class RouterInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:config.RouterInfo) */ {
 public:
  RouterInfo();
  virtual ~RouterInfo();

  RouterInfo(const RouterInfo& from);

  inline RouterInfo& operator=(const RouterInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RouterInfo(RouterInfo&& from) noexcept
    : RouterInfo() {
    *this = ::std::move(from);
  }

  inline RouterInfo& operator=(RouterInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RouterInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RouterInfo* internal_default_instance() {
    return reinterpret_cast<const RouterInfo*>(
               &_RouterInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RouterInfo* other);
  friend void swap(RouterInfo& a, RouterInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RouterInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  RouterInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RouterInfo& from);
  void MergeFrom(const RouterInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RouterInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string listen_ip = 1;
  bool has_listen_ip() const;
  void clear_listen_ip();
  static const int kListenIpFieldNumber = 1;
  const ::std::string& listen_ip() const;
  void set_listen_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_listen_ip(::std::string&& value);
  #endif
  void set_listen_ip(const char* value);
  void set_listen_ip(const char* value, size_t size);
  ::std::string* mutable_listen_ip();
  ::std::string* release_listen_ip();
  void set_allocated_listen_ip(::std::string* listen_ip);

  // optional int32 listen_port = 2;
  bool has_listen_port() const;
  void clear_listen_port();
  static const int kListenPortFieldNumber = 2;
  ::google::protobuf::int32 listen_port() const;
  void set_listen_port(::google::protobuf::int32 value);

  // optional int32 number = 3;
  bool has_number() const;
  void clear_number();
  static const int kNumberFieldNumber = 3;
  ::google::protobuf::int32 number() const;
  void set_number(::google::protobuf::int32 value);

  // optional int32 svr_zone = 4;
  bool has_svr_zone() const;
  void clear_svr_zone();
  static const int kSvrZoneFieldNumber = 4;
  ::google::protobuf::int32 svr_zone() const;
  void set_svr_zone(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:config.RouterInfo)
 private:
  void set_has_listen_ip();
  void clear_has_listen_ip();
  void set_has_listen_port();
  void clear_has_listen_port();
  void set_has_number();
  void clear_has_number();
  void set_has_svr_zone();
  void clear_has_svr_zone();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr listen_ip_;
  ::google::protobuf::int32 listen_port_;
  ::google::protobuf::int32 number_;
  ::google::protobuf::int32 svr_zone_;
  friend struct ::protobuf_router_2eproto::TableStruct;
  friend void ::protobuf_router_2eproto::InitDefaultsRouterInfoImpl();
};
// -------------------------------------------------------------------

class RouterConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:config.RouterConfig) */ {
 public:
  RouterConfig();
  virtual ~RouterConfig();

  RouterConfig(const RouterConfig& from);

  inline RouterConfig& operator=(const RouterConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RouterConfig(RouterConfig&& from) noexcept
    : RouterConfig() {
    *this = ::std::move(from);
  }

  inline RouterConfig& operator=(RouterConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RouterConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RouterConfig* internal_default_instance() {
    return reinterpret_cast<const RouterConfig*>(
               &_RouterConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(RouterConfig* other);
  friend void swap(RouterConfig& a, RouterConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RouterConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  RouterConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RouterConfig& from);
  void MergeFrom(const RouterConfig& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RouterConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .config.RouterInfo router_list = 1;
  int router_list_size() const;
  void clear_router_list();
  static const int kRouterListFieldNumber = 1;
  const ::config::RouterInfo& router_list(int index) const;
  ::config::RouterInfo* mutable_router_list(int index);
  ::config::RouterInfo* add_router_list();
  ::google::protobuf::RepeatedPtrField< ::config::RouterInfo >*
      mutable_router_list();
  const ::google::protobuf::RepeatedPtrField< ::config::RouterInfo >&
      router_list() const;

  // @@protoc_insertion_point(class_scope:config.RouterConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::config::RouterInfo > router_list_;
  friend struct ::protobuf_router_2eproto::TableStruct;
  friend void ::protobuf_router_2eproto::InitDefaultsRouterConfigImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RouterInfo

// optional string listen_ip = 1;
inline bool RouterInfo::has_listen_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RouterInfo::set_has_listen_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RouterInfo::clear_has_listen_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RouterInfo::clear_listen_ip() {
  listen_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_listen_ip();
}
inline const ::std::string& RouterInfo::listen_ip() const {
  // @@protoc_insertion_point(field_get:config.RouterInfo.listen_ip)
  return listen_ip_.GetNoArena();
}
inline void RouterInfo::set_listen_ip(const ::std::string& value) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:config.RouterInfo.listen_ip)
}
#if LANG_CXX11
inline void RouterInfo::set_listen_ip(::std::string&& value) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:config.RouterInfo.listen_ip)
}
#endif
inline void RouterInfo::set_listen_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:config.RouterInfo.listen_ip)
}
inline void RouterInfo::set_listen_ip(const char* value, size_t size) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:config.RouterInfo.listen_ip)
}
inline ::std::string* RouterInfo::mutable_listen_ip() {
  set_has_listen_ip();
  // @@protoc_insertion_point(field_mutable:config.RouterInfo.listen_ip)
  return listen_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RouterInfo::release_listen_ip() {
  // @@protoc_insertion_point(field_release:config.RouterInfo.listen_ip)
  clear_has_listen_ip();
  return listen_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RouterInfo::set_allocated_listen_ip(::std::string* listen_ip) {
  if (listen_ip != NULL) {
    set_has_listen_ip();
  } else {
    clear_has_listen_ip();
  }
  listen_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), listen_ip);
  // @@protoc_insertion_point(field_set_allocated:config.RouterInfo.listen_ip)
}

// optional int32 listen_port = 2;
inline bool RouterInfo::has_listen_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RouterInfo::set_has_listen_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RouterInfo::clear_has_listen_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RouterInfo::clear_listen_port() {
  listen_port_ = 0;
  clear_has_listen_port();
}
inline ::google::protobuf::int32 RouterInfo::listen_port() const {
  // @@protoc_insertion_point(field_get:config.RouterInfo.listen_port)
  return listen_port_;
}
inline void RouterInfo::set_listen_port(::google::protobuf::int32 value) {
  set_has_listen_port();
  listen_port_ = value;
  // @@protoc_insertion_point(field_set:config.RouterInfo.listen_port)
}

// optional int32 number = 3;
inline bool RouterInfo::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RouterInfo::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RouterInfo::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RouterInfo::clear_number() {
  number_ = 0;
  clear_has_number();
}
inline ::google::protobuf::int32 RouterInfo::number() const {
  // @@protoc_insertion_point(field_get:config.RouterInfo.number)
  return number_;
}
inline void RouterInfo::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
  // @@protoc_insertion_point(field_set:config.RouterInfo.number)
}

// optional int32 svr_zone = 4;
inline bool RouterInfo::has_svr_zone() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RouterInfo::set_has_svr_zone() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RouterInfo::clear_has_svr_zone() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RouterInfo::clear_svr_zone() {
  svr_zone_ = 0;
  clear_has_svr_zone();
}
inline ::google::protobuf::int32 RouterInfo::svr_zone() const {
  // @@protoc_insertion_point(field_get:config.RouterInfo.svr_zone)
  return svr_zone_;
}
inline void RouterInfo::set_svr_zone(::google::protobuf::int32 value) {
  set_has_svr_zone();
  svr_zone_ = value;
  // @@protoc_insertion_point(field_set:config.RouterInfo.svr_zone)
}

// -------------------------------------------------------------------

// RouterConfig

// repeated .config.RouterInfo router_list = 1;
inline int RouterConfig::router_list_size() const {
  return router_list_.size();
}
inline void RouterConfig::clear_router_list() {
  router_list_.Clear();
}
inline const ::config::RouterInfo& RouterConfig::router_list(int index) const {
  // @@protoc_insertion_point(field_get:config.RouterConfig.router_list)
  return router_list_.Get(index);
}
inline ::config::RouterInfo* RouterConfig::mutable_router_list(int index) {
  // @@protoc_insertion_point(field_mutable:config.RouterConfig.router_list)
  return router_list_.Mutable(index);
}
inline ::config::RouterInfo* RouterConfig::add_router_list() {
  // @@protoc_insertion_point(field_add:config.RouterConfig.router_list)
  return router_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::config::RouterInfo >*
RouterConfig::mutable_router_list() {
  // @@protoc_insertion_point(field_mutable_list:config.RouterConfig.router_list)
  return &router_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::config::RouterInfo >&
RouterConfig::router_list() const {
  // @@protoc_insertion_point(field_list:config.RouterConfig.router_list)
  return router_list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace config

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_router_2eproto__INCLUDED
