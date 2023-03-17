// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerInternalProto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ServerInternalProto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ServerInternalProto_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ServerInternalProto_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ServerInternalProto_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerInternalProto_2eproto;
class MsgDBRegisterLogin;
class MsgDBRegisterLoginDefaultTypeInternal;
extern MsgDBRegisterLoginDefaultTypeInternal _MsgDBRegisterLogin_default_instance_;
class MsgDBUpdateOnlineNum;
class MsgDBUpdateOnlineNumDefaultTypeInternal;
extern MsgDBUpdateOnlineNumDefaultTypeInternal _MsgDBUpdateOnlineNum_default_instance_;
class MsgRegisterServer;
class MsgRegisterServerDefaultTypeInternal;
extern MsgRegisterServerDefaultTypeInternal _MsgRegisterServer_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::MsgDBRegisterLogin* Arena::CreateMaybeMessage<::MsgDBRegisterLogin>(Arena*);
template<> ::MsgDBUpdateOnlineNum* Arena::CreateMaybeMessage<::MsgDBUpdateOnlineNum>(Arena*);
template<> ::MsgRegisterServer* Arena::CreateMaybeMessage<::MsgRegisterServer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class MsgRegisterServer PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgRegisterServer) */ {
 public:
  inline MsgRegisterServer() : MsgRegisterServer(nullptr) {}
  virtual ~MsgRegisterServer();

  MsgRegisterServer(const MsgRegisterServer& from);
  MsgRegisterServer(MsgRegisterServer&& from) noexcept
    : MsgRegisterServer() {
    *this = ::std::move(from);
  }

  inline MsgRegisterServer& operator=(const MsgRegisterServer& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgRegisterServer& operator=(MsgRegisterServer&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgRegisterServer& default_instance();

  static inline const MsgRegisterServer* internal_default_instance() {
    return reinterpret_cast<const MsgRegisterServer*>(
               &_MsgRegisterServer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgRegisterServer& a, MsgRegisterServer& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgRegisterServer* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgRegisterServer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgRegisterServer* New() const final {
    return CreateMaybeMessage<MsgRegisterServer>(nullptr);
  }

  MsgRegisterServer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgRegisterServer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgRegisterServer& from);
  void MergeFrom(const MsgRegisterServer& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgRegisterServer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgRegisterServer";
  }
  protected:
  explicit MsgRegisterServer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ServerInternalProto_2eproto);
    return ::descriptor_table_ServerInternalProto_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpFieldNumber = 1,
    kPortFieldNumber = 2,
    kServerIdFieldNumber = 3,
  };
  // int32 ip = 1;
  void clear_ip();
  ::PROTOBUF_NAMESPACE_ID::int32 ip() const;
  void set_ip(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_ip() const;
  void _internal_set_ip(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 port = 2;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 server_id = 3;
  void clear_server_id();
  ::PROTOBUF_NAMESPACE_ID::int32 server_id() const;
  void set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_server_id() const;
  void _internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MsgRegisterServer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 ip_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  ::PROTOBUF_NAMESPACE_ID::int32 server_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ServerInternalProto_2eproto;
};
// -------------------------------------------------------------------

class MsgDBUpdateOnlineNum PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgDBUpdateOnlineNum) */ {
 public:
  inline MsgDBUpdateOnlineNum() : MsgDBUpdateOnlineNum(nullptr) {}
  virtual ~MsgDBUpdateOnlineNum();

  MsgDBUpdateOnlineNum(const MsgDBUpdateOnlineNum& from);
  MsgDBUpdateOnlineNum(MsgDBUpdateOnlineNum&& from) noexcept
    : MsgDBUpdateOnlineNum() {
    *this = ::std::move(from);
  }

  inline MsgDBUpdateOnlineNum& operator=(const MsgDBUpdateOnlineNum& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgDBUpdateOnlineNum& operator=(MsgDBUpdateOnlineNum&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgDBUpdateOnlineNum& default_instance();

  static inline const MsgDBUpdateOnlineNum* internal_default_instance() {
    return reinterpret_cast<const MsgDBUpdateOnlineNum*>(
               &_MsgDBUpdateOnlineNum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MsgDBUpdateOnlineNum& a, MsgDBUpdateOnlineNum& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgDBUpdateOnlineNum* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgDBUpdateOnlineNum* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgDBUpdateOnlineNum* New() const final {
    return CreateMaybeMessage<MsgDBUpdateOnlineNum>(nullptr);
  }

  MsgDBUpdateOnlineNum* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgDBUpdateOnlineNum>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgDBUpdateOnlineNum& from);
  void MergeFrom(const MsgDBUpdateOnlineNum& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgDBUpdateOnlineNum* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgDBUpdateOnlineNum";
  }
  protected:
  explicit MsgDBUpdateOnlineNum(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ServerInternalProto_2eproto);
    return ::descriptor_table_ServerInternalProto_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServerIdFieldNumber = 1,
    kPortFieldNumber = 2,
    kOnlineNumFieldNumber = 3,
  };
  // int32 server_id = 1;
  void clear_server_id();
  ::PROTOBUF_NAMESPACE_ID::int32 server_id() const;
  void set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_server_id() const;
  void _internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 port = 2;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 online_num = 3;
  void clear_online_num();
  ::PROTOBUF_NAMESPACE_ID::int32 online_num() const;
  void set_online_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_online_num() const;
  void _internal_set_online_num(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MsgDBUpdateOnlineNum)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 server_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  ::PROTOBUF_NAMESPACE_ID::int32 online_num_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ServerInternalProto_2eproto;
};
// -------------------------------------------------------------------

class MsgDBRegisterLogin PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgDBRegisterLogin) */ {
 public:
  inline MsgDBRegisterLogin() : MsgDBRegisterLogin(nullptr) {}
  virtual ~MsgDBRegisterLogin();

  MsgDBRegisterLogin(const MsgDBRegisterLogin& from);
  MsgDBRegisterLogin(MsgDBRegisterLogin&& from) noexcept
    : MsgDBRegisterLogin() {
    *this = ::std::move(from);
  }

  inline MsgDBRegisterLogin& operator=(const MsgDBRegisterLogin& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgDBRegisterLogin& operator=(MsgDBRegisterLogin&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgDBRegisterLogin& default_instance();

  static inline const MsgDBRegisterLogin* internal_default_instance() {
    return reinterpret_cast<const MsgDBRegisterLogin*>(
               &_MsgDBRegisterLogin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MsgDBRegisterLogin& a, MsgDBRegisterLogin& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgDBRegisterLogin* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgDBRegisterLogin* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgDBRegisterLogin* New() const final {
    return CreateMaybeMessage<MsgDBRegisterLogin>(nullptr);
  }

  MsgDBRegisterLogin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgDBRegisterLogin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgDBRegisterLogin& from);
  void MergeFrom(const MsgDBRegisterLogin& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgDBRegisterLogin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgDBRegisterLogin";
  }
  protected:
  explicit MsgDBRegisterLogin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ServerInternalProto_2eproto);
    return ::descriptor_table_ServerInternalProto_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServerIdFieldNumber = 1,
    kPortFieldNumber = 2,
  };
  // int32 server_id = 1;
  void clear_server_id();
  ::PROTOBUF_NAMESPACE_ID::int32 server_id() const;
  void set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_server_id() const;
  void _internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 port = 2;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MsgDBRegisterLogin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 server_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ServerInternalProto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgRegisterServer

// int32 ip = 1;
inline void MsgRegisterServer::clear_ip() {
  ip_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::_internal_ip() const {
  return ip_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::ip() const {
  // @@protoc_insertion_point(field_get:MsgRegisterServer.ip)
  return _internal_ip();
}
inline void MsgRegisterServer::_internal_set_ip(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  ip_ = value;
}
inline void MsgRegisterServer::set_ip(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_ip(value);
  // @@protoc_insertion_point(field_set:MsgRegisterServer.ip)
}

// int32 port = 2;
inline void MsgRegisterServer::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::port() const {
  // @@protoc_insertion_point(field_get:MsgRegisterServer.port)
  return _internal_port();
}
inline void MsgRegisterServer::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void MsgRegisterServer::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:MsgRegisterServer.port)
}

// int32 server_id = 3;
inline void MsgRegisterServer::clear_server_id() {
  server_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::_internal_server_id() const {
  return server_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgRegisterServer::server_id() const {
  // @@protoc_insertion_point(field_get:MsgRegisterServer.server_id)
  return _internal_server_id();
}
inline void MsgRegisterServer::_internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  server_id_ = value;
}
inline void MsgRegisterServer::set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_server_id(value);
  // @@protoc_insertion_point(field_set:MsgRegisterServer.server_id)
}

// -------------------------------------------------------------------

// MsgDBUpdateOnlineNum

// int32 server_id = 1;
inline void MsgDBUpdateOnlineNum::clear_server_id() {
  server_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::_internal_server_id() const {
  return server_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::server_id() const {
  // @@protoc_insertion_point(field_get:MsgDBUpdateOnlineNum.server_id)
  return _internal_server_id();
}
inline void MsgDBUpdateOnlineNum::_internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  server_id_ = value;
}
inline void MsgDBUpdateOnlineNum::set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_server_id(value);
  // @@protoc_insertion_point(field_set:MsgDBUpdateOnlineNum.server_id)
}

// int32 port = 2;
inline void MsgDBUpdateOnlineNum::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::port() const {
  // @@protoc_insertion_point(field_get:MsgDBUpdateOnlineNum.port)
  return _internal_port();
}
inline void MsgDBUpdateOnlineNum::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void MsgDBUpdateOnlineNum::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:MsgDBUpdateOnlineNum.port)
}

// int32 online_num = 3;
inline void MsgDBUpdateOnlineNum::clear_online_num() {
  online_num_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::_internal_online_num() const {
  return online_num_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBUpdateOnlineNum::online_num() const {
  // @@protoc_insertion_point(field_get:MsgDBUpdateOnlineNum.online_num)
  return _internal_online_num();
}
inline void MsgDBUpdateOnlineNum::_internal_set_online_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  online_num_ = value;
}
inline void MsgDBUpdateOnlineNum::set_online_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_online_num(value);
  // @@protoc_insertion_point(field_set:MsgDBUpdateOnlineNum.online_num)
}

// -------------------------------------------------------------------

// MsgDBRegisterLogin

// int32 server_id = 1;
inline void MsgDBRegisterLogin::clear_server_id() {
  server_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBRegisterLogin::_internal_server_id() const {
  return server_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBRegisterLogin::server_id() const {
  // @@protoc_insertion_point(field_get:MsgDBRegisterLogin.server_id)
  return _internal_server_id();
}
inline void MsgDBRegisterLogin::_internal_set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  server_id_ = value;
}
inline void MsgDBRegisterLogin::set_server_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_server_id(value);
  // @@protoc_insertion_point(field_set:MsgDBRegisterLogin.server_id)
}

// int32 port = 2;
inline void MsgDBRegisterLogin::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBRegisterLogin::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgDBRegisterLogin::port() const {
  // @@protoc_insertion_point(field_get:MsgDBRegisterLogin.port)
  return _internal_port();
}
inline void MsgDBRegisterLogin::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void MsgDBRegisterLogin::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:MsgDBRegisterLogin.port)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ServerInternalProto_2eproto