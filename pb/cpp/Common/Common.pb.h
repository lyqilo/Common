// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Common_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Common_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Common_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Common_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Common_2eproto;
class MsgCommonBool;
class MsgCommonBoolDefaultTypeInternal;
extern MsgCommonBoolDefaultTypeInternal _MsgCommonBool_default_instance_;
class MsgCommonN32;
class MsgCommonN32DefaultTypeInternal;
extern MsgCommonN32DefaultTypeInternal _MsgCommonN32_default_instance_;
class MsgCommonN64;
class MsgCommonN64DefaultTypeInternal;
extern MsgCommonN64DefaultTypeInternal _MsgCommonN64_default_instance_;
class MsgCommonStr;
class MsgCommonStrDefaultTypeInternal;
extern MsgCommonStrDefaultTypeInternal _MsgCommonStr_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::MsgCommonBool* Arena::CreateMaybeMessage<::MsgCommonBool>(Arena*);
template<> ::MsgCommonN32* Arena::CreateMaybeMessage<::MsgCommonN32>(Arena*);
template<> ::MsgCommonN64* Arena::CreateMaybeMessage<::MsgCommonN64>(Arena*);
template<> ::MsgCommonStr* Arena::CreateMaybeMessage<::MsgCommonStr>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class MsgCommonBool PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgCommonBool) */ {
 public:
  inline MsgCommonBool() : MsgCommonBool(nullptr) {}
  virtual ~MsgCommonBool();

  MsgCommonBool(const MsgCommonBool& from);
  MsgCommonBool(MsgCommonBool&& from) noexcept
    : MsgCommonBool() {
    *this = ::std::move(from);
  }

  inline MsgCommonBool& operator=(const MsgCommonBool& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCommonBool& operator=(MsgCommonBool&& from) noexcept {
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
  static const MsgCommonBool& default_instance();

  static inline const MsgCommonBool* internal_default_instance() {
    return reinterpret_cast<const MsgCommonBool*>(
               &_MsgCommonBool_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgCommonBool& a, MsgCommonBool& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCommonBool* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgCommonBool* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgCommonBool* New() const final {
    return CreateMaybeMessage<MsgCommonBool>(nullptr);
  }

  MsgCommonBool* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgCommonBool>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgCommonBool& from);
  void MergeFrom(const MsgCommonBool& from);
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
  void InternalSwap(MsgCommonBool* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgCommonBool";
  }
  protected:
  explicit MsgCommonBool(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Common_2eproto);
    return ::descriptor_table_Common_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // bool value = 1;
  void clear_value();
  bool value() const;
  void set_value(bool value);
  private:
  bool _internal_value() const;
  void _internal_set_value(bool value);
  public:

  // @@protoc_insertion_point(class_scope:MsgCommonBool)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Common_2eproto;
};
// -------------------------------------------------------------------

class MsgCommonN32 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgCommonN32) */ {
 public:
  inline MsgCommonN32() : MsgCommonN32(nullptr) {}
  virtual ~MsgCommonN32();

  MsgCommonN32(const MsgCommonN32& from);
  MsgCommonN32(MsgCommonN32&& from) noexcept
    : MsgCommonN32() {
    *this = ::std::move(from);
  }

  inline MsgCommonN32& operator=(const MsgCommonN32& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCommonN32& operator=(MsgCommonN32&& from) noexcept {
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
  static const MsgCommonN32& default_instance();

  static inline const MsgCommonN32* internal_default_instance() {
    return reinterpret_cast<const MsgCommonN32*>(
               &_MsgCommonN32_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MsgCommonN32& a, MsgCommonN32& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCommonN32* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgCommonN32* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgCommonN32* New() const final {
    return CreateMaybeMessage<MsgCommonN32>(nullptr);
  }

  MsgCommonN32* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgCommonN32>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgCommonN32& from);
  void MergeFrom(const MsgCommonN32& from);
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
  void InternalSwap(MsgCommonN32* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgCommonN32";
  }
  protected:
  explicit MsgCommonN32(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Common_2eproto);
    return ::descriptor_table_Common_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // int32 value = 1;
  void clear_value();
  ::PROTOBUF_NAMESPACE_ID::int32 value() const;
  void set_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_value() const;
  void _internal_set_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:MsgCommonN32)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Common_2eproto;
};
// -------------------------------------------------------------------

class MsgCommonN64 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgCommonN64) */ {
 public:
  inline MsgCommonN64() : MsgCommonN64(nullptr) {}
  virtual ~MsgCommonN64();

  MsgCommonN64(const MsgCommonN64& from);
  MsgCommonN64(MsgCommonN64&& from) noexcept
    : MsgCommonN64() {
    *this = ::std::move(from);
  }

  inline MsgCommonN64& operator=(const MsgCommonN64& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCommonN64& operator=(MsgCommonN64&& from) noexcept {
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
  static const MsgCommonN64& default_instance();

  static inline const MsgCommonN64* internal_default_instance() {
    return reinterpret_cast<const MsgCommonN64*>(
               &_MsgCommonN64_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MsgCommonN64& a, MsgCommonN64& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCommonN64* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgCommonN64* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgCommonN64* New() const final {
    return CreateMaybeMessage<MsgCommonN64>(nullptr);
  }

  MsgCommonN64* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgCommonN64>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgCommonN64& from);
  void MergeFrom(const MsgCommonN64& from);
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
  void InternalSwap(MsgCommonN64* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgCommonN64";
  }
  protected:
  explicit MsgCommonN64(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Common_2eproto);
    return ::descriptor_table_Common_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // int64 value = 1;
  void clear_value();
  ::PROTOBUF_NAMESPACE_ID::int64 value() const;
  void set_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_value() const;
  void _internal_set_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:MsgCommonN64)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Common_2eproto;
};
// -------------------------------------------------------------------

class MsgCommonStr PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgCommonStr) */ {
 public:
  inline MsgCommonStr() : MsgCommonStr(nullptr) {}
  virtual ~MsgCommonStr();

  MsgCommonStr(const MsgCommonStr& from);
  MsgCommonStr(MsgCommonStr&& from) noexcept
    : MsgCommonStr() {
    *this = ::std::move(from);
  }

  inline MsgCommonStr& operator=(const MsgCommonStr& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCommonStr& operator=(MsgCommonStr&& from) noexcept {
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
  static const MsgCommonStr& default_instance();

  static inline const MsgCommonStr* internal_default_instance() {
    return reinterpret_cast<const MsgCommonStr*>(
               &_MsgCommonStr_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(MsgCommonStr& a, MsgCommonStr& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCommonStr* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MsgCommonStr* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgCommonStr* New() const final {
    return CreateMaybeMessage<MsgCommonStr>(nullptr);
  }

  MsgCommonStr* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgCommonStr>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgCommonStr& from);
  void MergeFrom(const MsgCommonStr& from);
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
  void InternalSwap(MsgCommonStr* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgCommonStr";
  }
  protected:
  explicit MsgCommonStr(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Common_2eproto);
    return ::descriptor_table_Common_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // string value = 1;
  void clear_value();
  const std::string& value() const;
  void set_value(const std::string& value);
  void set_value(std::string&& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  std::string* mutable_value();
  std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:MsgCommonStr)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Common_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgCommonBool

// bool value = 1;
inline void MsgCommonBool::clear_value() {
  value_ = false;
}
inline bool MsgCommonBool::_internal_value() const {
  return value_;
}
inline bool MsgCommonBool::value() const {
  // @@protoc_insertion_point(field_get:MsgCommonBool.value)
  return _internal_value();
}
inline void MsgCommonBool::_internal_set_value(bool value) {
  
  value_ = value;
}
inline void MsgCommonBool::set_value(bool value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:MsgCommonBool.value)
}

// -------------------------------------------------------------------

// MsgCommonN32

// int32 value = 1;
inline void MsgCommonN32::clear_value() {
  value_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgCommonN32::_internal_value() const {
  return value_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MsgCommonN32::value() const {
  // @@protoc_insertion_point(field_get:MsgCommonN32.value)
  return _internal_value();
}
inline void MsgCommonN32::_internal_set_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  value_ = value;
}
inline void MsgCommonN32::set_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:MsgCommonN32.value)
}

// -------------------------------------------------------------------

// MsgCommonN64

// int64 value = 1;
inline void MsgCommonN64::clear_value() {
  value_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MsgCommonN64::_internal_value() const {
  return value_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MsgCommonN64::value() const {
  // @@protoc_insertion_point(field_get:MsgCommonN64.value)
  return _internal_value();
}
inline void MsgCommonN64::_internal_set_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  value_ = value;
}
inline void MsgCommonN64::set_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:MsgCommonN64.value)
}

// -------------------------------------------------------------------

// MsgCommonStr

// string value = 1;
inline void MsgCommonStr::clear_value() {
  value_.ClearToEmpty();
}
inline const std::string& MsgCommonStr::value() const {
  // @@protoc_insertion_point(field_get:MsgCommonStr.value)
  return _internal_value();
}
inline void MsgCommonStr::set_value(const std::string& value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:MsgCommonStr.value)
}
inline std::string* MsgCommonStr::mutable_value() {
  // @@protoc_insertion_point(field_mutable:MsgCommonStr.value)
  return _internal_mutable_value();
}
inline const std::string& MsgCommonStr::_internal_value() const {
  return value_.Get();
}
inline void MsgCommonStr::_internal_set_value(const std::string& value) {
  
  value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void MsgCommonStr::set_value(std::string&& value) {
  
  value_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:MsgCommonStr.value)
}
inline void MsgCommonStr::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:MsgCommonStr.value)
}
inline void MsgCommonStr::set_value(const char* value,
    size_t size) {
  
  value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:MsgCommonStr.value)
}
inline std::string* MsgCommonStr::_internal_mutable_value() {
  
  return value_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* MsgCommonStr::release_value() {
  // @@protoc_insertion_point(field_release:MsgCommonStr.value)
  return value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void MsgCommonStr::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:MsgCommonStr.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Common_2eproto
