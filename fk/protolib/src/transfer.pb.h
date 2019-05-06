// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transfer.proto

#ifndef PROTOBUF_transfer_2eproto__INCLUDED
#define PROTOBUF_transfer_2eproto__INCLUDED

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

namespace protobuf_transfer_2eproto {
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
void InitDefaultsTransferInfoImpl();
void InitDefaultsTransferInfo();
void InitDefaultsTransferConfigImpl();
void InitDefaultsTransferConfig();
inline void InitDefaults() {
  InitDefaultsTransferInfo();
  InitDefaultsTransferConfig();
}
}  // namespace protobuf_transfer_2eproto
namespace config {
class TransferConfig;
class TransferConfigDefaultTypeInternal;
extern TransferConfigDefaultTypeInternal _TransferConfig_default_instance_;
class TransferInfo;
class TransferInfoDefaultTypeInternal;
extern TransferInfoDefaultTypeInternal _TransferInfo_default_instance_;
}  // namespace config
namespace config {

// ===================================================================

class TransferInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:config.TransferInfo) */ {
 public:
  TransferInfo();
  virtual ~TransferInfo();

  TransferInfo(const TransferInfo& from);

  inline TransferInfo& operator=(const TransferInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TransferInfo(TransferInfo&& from) noexcept
    : TransferInfo() {
    *this = ::std::move(from);
  }

  inline TransferInfo& operator=(TransferInfo&& from) noexcept {
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
  static const TransferInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TransferInfo* internal_default_instance() {
    return reinterpret_cast<const TransferInfo*>(
               &_TransferInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(TransferInfo* other);
  friend void swap(TransferInfo& a, TransferInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TransferInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  TransferInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TransferInfo& from);
  void MergeFrom(const TransferInfo& from);
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
  void InternalSwap(TransferInfo* other);
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

  // optional int32 server_zone = 4;
  bool has_server_zone() const;
  void clear_server_zone();
  static const int kServerZoneFieldNumber = 4;
  ::google::protobuf::int32 server_zone() const;
  void set_server_zone(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:config.TransferInfo)
 private:
  void set_has_listen_ip();
  void clear_has_listen_ip();
  void set_has_listen_port();
  void clear_has_listen_port();
  void set_has_number();
  void clear_has_number();
  void set_has_server_zone();
  void clear_has_server_zone();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr listen_ip_;
  ::google::protobuf::int32 listen_port_;
  ::google::protobuf::int32 number_;
  ::google::protobuf::int32 server_zone_;
  friend struct ::protobuf_transfer_2eproto::TableStruct;
  friend void ::protobuf_transfer_2eproto::InitDefaultsTransferInfoImpl();
};
// -------------------------------------------------------------------

class TransferConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:config.TransferConfig) */ {
 public:
  TransferConfig();
  virtual ~TransferConfig();

  TransferConfig(const TransferConfig& from);

  inline TransferConfig& operator=(const TransferConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TransferConfig(TransferConfig&& from) noexcept
    : TransferConfig() {
    *this = ::std::move(from);
  }

  inline TransferConfig& operator=(TransferConfig&& from) noexcept {
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
  static const TransferConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TransferConfig* internal_default_instance() {
    return reinterpret_cast<const TransferConfig*>(
               &_TransferConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TransferConfig* other);
  friend void swap(TransferConfig& a, TransferConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TransferConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  TransferConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TransferConfig& from);
  void MergeFrom(const TransferConfig& from);
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
  void InternalSwap(TransferConfig* other);
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

  // repeated .config.TransferInfo transfer_list = 1;
  int transfer_list_size() const;
  void clear_transfer_list();
  static const int kTransferListFieldNumber = 1;
  const ::config::TransferInfo& transfer_list(int index) const;
  ::config::TransferInfo* mutable_transfer_list(int index);
  ::config::TransferInfo* add_transfer_list();
  ::google::protobuf::RepeatedPtrField< ::config::TransferInfo >*
      mutable_transfer_list();
  const ::google::protobuf::RepeatedPtrField< ::config::TransferInfo >&
      transfer_list() const;

  // @@protoc_insertion_point(class_scope:config.TransferConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::config::TransferInfo > transfer_list_;
  friend struct ::protobuf_transfer_2eproto::TableStruct;
  friend void ::protobuf_transfer_2eproto::InitDefaultsTransferConfigImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TransferInfo

// optional string listen_ip = 1;
inline bool TransferInfo::has_listen_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TransferInfo::set_has_listen_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TransferInfo::clear_has_listen_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TransferInfo::clear_listen_ip() {
  listen_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_listen_ip();
}
inline const ::std::string& TransferInfo::listen_ip() const {
  // @@protoc_insertion_point(field_get:config.TransferInfo.listen_ip)
  return listen_ip_.GetNoArena();
}
inline void TransferInfo::set_listen_ip(const ::std::string& value) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:config.TransferInfo.listen_ip)
}
#if LANG_CXX11
inline void TransferInfo::set_listen_ip(::std::string&& value) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:config.TransferInfo.listen_ip)
}
#endif
inline void TransferInfo::set_listen_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:config.TransferInfo.listen_ip)
}
inline void TransferInfo::set_listen_ip(const char* value, size_t size) {
  set_has_listen_ip();
  listen_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:config.TransferInfo.listen_ip)
}
inline ::std::string* TransferInfo::mutable_listen_ip() {
  set_has_listen_ip();
  // @@protoc_insertion_point(field_mutable:config.TransferInfo.listen_ip)
  return listen_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TransferInfo::release_listen_ip() {
  // @@protoc_insertion_point(field_release:config.TransferInfo.listen_ip)
  clear_has_listen_ip();
  return listen_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TransferInfo::set_allocated_listen_ip(::std::string* listen_ip) {
  if (listen_ip != NULL) {
    set_has_listen_ip();
  } else {
    clear_has_listen_ip();
  }
  listen_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), listen_ip);
  // @@protoc_insertion_point(field_set_allocated:config.TransferInfo.listen_ip)
}

// optional int32 listen_port = 2;
inline bool TransferInfo::has_listen_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TransferInfo::set_has_listen_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TransferInfo::clear_has_listen_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TransferInfo::clear_listen_port() {
  listen_port_ = 0;
  clear_has_listen_port();
}
inline ::google::protobuf::int32 TransferInfo::listen_port() const {
  // @@protoc_insertion_point(field_get:config.TransferInfo.listen_port)
  return listen_port_;
}
inline void TransferInfo::set_listen_port(::google::protobuf::int32 value) {
  set_has_listen_port();
  listen_port_ = value;
  // @@protoc_insertion_point(field_set:config.TransferInfo.listen_port)
}

// optional int32 number = 3;
inline bool TransferInfo::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TransferInfo::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TransferInfo::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TransferInfo::clear_number() {
  number_ = 0;
  clear_has_number();
}
inline ::google::protobuf::int32 TransferInfo::number() const {
  // @@protoc_insertion_point(field_get:config.TransferInfo.number)
  return number_;
}
inline void TransferInfo::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
  // @@protoc_insertion_point(field_set:config.TransferInfo.number)
}

// optional int32 server_zone = 4;
inline bool TransferInfo::has_server_zone() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TransferInfo::set_has_server_zone() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TransferInfo::clear_has_server_zone() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TransferInfo::clear_server_zone() {
  server_zone_ = 0;
  clear_has_server_zone();
}
inline ::google::protobuf::int32 TransferInfo::server_zone() const {
  // @@protoc_insertion_point(field_get:config.TransferInfo.server_zone)
  return server_zone_;
}
inline void TransferInfo::set_server_zone(::google::protobuf::int32 value) {
  set_has_server_zone();
  server_zone_ = value;
  // @@protoc_insertion_point(field_set:config.TransferInfo.server_zone)
}

// -------------------------------------------------------------------

// TransferConfig

// repeated .config.TransferInfo transfer_list = 1;
inline int TransferConfig::transfer_list_size() const {
  return transfer_list_.size();
}
inline void TransferConfig::clear_transfer_list() {
  transfer_list_.Clear();
}
inline const ::config::TransferInfo& TransferConfig::transfer_list(int index) const {
  // @@protoc_insertion_point(field_get:config.TransferConfig.transfer_list)
  return transfer_list_.Get(index);
}
inline ::config::TransferInfo* TransferConfig::mutable_transfer_list(int index) {
  // @@protoc_insertion_point(field_mutable:config.TransferConfig.transfer_list)
  return transfer_list_.Mutable(index);
}
inline ::config::TransferInfo* TransferConfig::add_transfer_list() {
  // @@protoc_insertion_point(field_add:config.TransferConfig.transfer_list)
  return transfer_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::config::TransferInfo >*
TransferConfig::mutable_transfer_list() {
  // @@protoc_insertion_point(field_mutable_list:config.TransferConfig.transfer_list)
  return &transfer_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::config::TransferInfo >&
TransferConfig::transfer_list() const {
  // @@protoc_insertion_point(field_list:config.TransferConfig.transfer_list)
  return transfer_list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace config

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_transfer_2eproto__INCLUDED
