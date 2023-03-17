// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerInternalProto.proto

#include "ServerInternalProto.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class MsgRegisterServerDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MsgRegisterServer> _instance;
} _MsgRegisterServer_default_instance_;
class MsgDBUpdateOnlineNumDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MsgDBUpdateOnlineNum> _instance;
} _MsgDBUpdateOnlineNum_default_instance_;
class MsgDBRegisterLoginDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MsgDBRegisterLogin> _instance;
} _MsgDBRegisterLogin_default_instance_;
static void InitDefaultsscc_info_MsgDBRegisterLogin_ServerInternalProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MsgDBRegisterLogin_default_instance_;
    new (ptr) ::MsgDBRegisterLogin();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MsgDBRegisterLogin_ServerInternalProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MsgDBRegisterLogin_ServerInternalProto_2eproto}, {}};

static void InitDefaultsscc_info_MsgDBUpdateOnlineNum_ServerInternalProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MsgDBUpdateOnlineNum_default_instance_;
    new (ptr) ::MsgDBUpdateOnlineNum();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MsgDBUpdateOnlineNum_ServerInternalProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MsgDBUpdateOnlineNum_ServerInternalProto_2eproto}, {}};

static void InitDefaultsscc_info_MsgRegisterServer_ServerInternalProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MsgRegisterServer_default_instance_;
    new (ptr) ::MsgRegisterServer();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MsgRegisterServer_ServerInternalProto_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MsgRegisterServer_ServerInternalProto_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ServerInternalProto_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ServerInternalProto_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ServerInternalProto_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ServerInternalProto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MsgRegisterServer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MsgRegisterServer, ip_),
  PROTOBUF_FIELD_OFFSET(::MsgRegisterServer, port_),
  PROTOBUF_FIELD_OFFSET(::MsgRegisterServer, server_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MsgDBUpdateOnlineNum, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MsgDBUpdateOnlineNum, server_id_),
  PROTOBUF_FIELD_OFFSET(::MsgDBUpdateOnlineNum, port_),
  PROTOBUF_FIELD_OFFSET(::MsgDBUpdateOnlineNum, online_num_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MsgDBRegisterLogin, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MsgDBRegisterLogin, server_id_),
  PROTOBUF_FIELD_OFFSET(::MsgDBRegisterLogin, port_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::MsgRegisterServer)},
  { 8, -1, sizeof(::MsgDBUpdateOnlineNum)},
  { 16, -1, sizeof(::MsgDBRegisterLogin)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MsgRegisterServer_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MsgDBUpdateOnlineNum_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MsgDBRegisterLogin_default_instance_),
};

const char descriptor_table_protodef_ServerInternalProto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031ServerInternalProto.proto\"@\n\021MsgRegist"
  "erServer\022\n\n\002ip\030\001 \001(\005\022\014\n\004port\030\002 \001(\005\022\021\n\tse"
  "rver_id\030\003 \001(\005\"K\n\024MsgDBUpdateOnlineNum\022\021\n"
  "\tserver_id\030\001 \001(\005\022\014\n\004port\030\002 \001(\005\022\022\n\nonline"
  "_num\030\003 \001(\005\"5\n\022MsgDBRegisterLogin\022\021\n\tserv"
  "er_id\030\001 \001(\005\022\014\n\004port\030\002 \001(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ServerInternalProto_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ServerInternalProto_2eproto_sccs[3] = {
  &scc_info_MsgDBRegisterLogin_ServerInternalProto_2eproto.base,
  &scc_info_MsgDBUpdateOnlineNum_ServerInternalProto_2eproto.base,
  &scc_info_MsgRegisterServer_ServerInternalProto_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ServerInternalProto_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ServerInternalProto_2eproto = {
  false, false, descriptor_table_protodef_ServerInternalProto_2eproto, "ServerInternalProto.proto", 233,
  &descriptor_table_ServerInternalProto_2eproto_once, descriptor_table_ServerInternalProto_2eproto_sccs, descriptor_table_ServerInternalProto_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_ServerInternalProto_2eproto::offsets,
  file_level_metadata_ServerInternalProto_2eproto, 3, file_level_enum_descriptors_ServerInternalProto_2eproto, file_level_service_descriptors_ServerInternalProto_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ServerInternalProto_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ServerInternalProto_2eproto)), true);

// ===================================================================

class MsgRegisterServer::_Internal {
 public:
};

MsgRegisterServer::MsgRegisterServer(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:MsgRegisterServer)
}
MsgRegisterServer::MsgRegisterServer(const MsgRegisterServer& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&ip_, &from.ip_,
    static_cast<size_t>(reinterpret_cast<char*>(&server_id_) -
    reinterpret_cast<char*>(&ip_)) + sizeof(server_id_));
  // @@protoc_insertion_point(copy_constructor:MsgRegisterServer)
}

void MsgRegisterServer::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&ip_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&server_id_) -
      reinterpret_cast<char*>(&ip_)) + sizeof(server_id_));
}

MsgRegisterServer::~MsgRegisterServer() {
  // @@protoc_insertion_point(destructor:MsgRegisterServer)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MsgRegisterServer::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void MsgRegisterServer::ArenaDtor(void* object) {
  MsgRegisterServer* _this = reinterpret_cast< MsgRegisterServer* >(object);
  (void)_this;
}
void MsgRegisterServer::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MsgRegisterServer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MsgRegisterServer& MsgRegisterServer::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MsgRegisterServer_ServerInternalProto_2eproto.base);
  return *internal_default_instance();
}


void MsgRegisterServer::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgRegisterServer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&ip_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&server_id_) -
      reinterpret_cast<char*>(&ip_)) + sizeof(server_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgRegisterServer::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ip_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 server_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          server_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MsgRegisterServer::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgRegisterServer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ip = 1;
  if (this->ip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_ip(), target);
  }

  // int32 port = 2;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_port(), target);
  }

  // int32 server_id = 3;
  if (this->server_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_server_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgRegisterServer)
  return target;
}

size_t MsgRegisterServer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgRegisterServer)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 ip = 1;
  if (this->ip() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_ip());
  }

  // int32 port = 2;
  if (this->port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_port());
  }

  // int32 server_id = 3;
  if (this->server_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_server_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MsgRegisterServer::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MsgRegisterServer)
  GOOGLE_DCHECK_NE(&from, this);
  const MsgRegisterServer* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MsgRegisterServer>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MsgRegisterServer)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MsgRegisterServer)
    MergeFrom(*source);
  }
}

void MsgRegisterServer::MergeFrom(const MsgRegisterServer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgRegisterServer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.ip() != 0) {
    _internal_set_ip(from._internal_ip());
  }
  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
  if (from.server_id() != 0) {
    _internal_set_server_id(from._internal_server_id());
  }
}

void MsgRegisterServer::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MsgRegisterServer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgRegisterServer::CopyFrom(const MsgRegisterServer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgRegisterServer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRegisterServer::IsInitialized() const {
  return true;
}

void MsgRegisterServer::InternalSwap(MsgRegisterServer* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MsgRegisterServer, server_id_)
      + sizeof(MsgRegisterServer::server_id_)
      - PROTOBUF_FIELD_OFFSET(MsgRegisterServer, ip_)>(
          reinterpret_cast<char*>(&ip_),
          reinterpret_cast<char*>(&other->ip_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgRegisterServer::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class MsgDBUpdateOnlineNum::_Internal {
 public:
};

MsgDBUpdateOnlineNum::MsgDBUpdateOnlineNum(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:MsgDBUpdateOnlineNum)
}
MsgDBUpdateOnlineNum::MsgDBUpdateOnlineNum(const MsgDBUpdateOnlineNum& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&server_id_, &from.server_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&online_num_) -
    reinterpret_cast<char*>(&server_id_)) + sizeof(online_num_));
  // @@protoc_insertion_point(copy_constructor:MsgDBUpdateOnlineNum)
}

void MsgDBUpdateOnlineNum::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&server_id_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&online_num_) -
      reinterpret_cast<char*>(&server_id_)) + sizeof(online_num_));
}

MsgDBUpdateOnlineNum::~MsgDBUpdateOnlineNum() {
  // @@protoc_insertion_point(destructor:MsgDBUpdateOnlineNum)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MsgDBUpdateOnlineNum::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void MsgDBUpdateOnlineNum::ArenaDtor(void* object) {
  MsgDBUpdateOnlineNum* _this = reinterpret_cast< MsgDBUpdateOnlineNum* >(object);
  (void)_this;
}
void MsgDBUpdateOnlineNum::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MsgDBUpdateOnlineNum::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MsgDBUpdateOnlineNum& MsgDBUpdateOnlineNum::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MsgDBUpdateOnlineNum_ServerInternalProto_2eproto.base);
  return *internal_default_instance();
}


void MsgDBUpdateOnlineNum::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgDBUpdateOnlineNum)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&server_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&online_num_) -
      reinterpret_cast<char*>(&server_id_)) + sizeof(online_num_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgDBUpdateOnlineNum::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 server_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          server_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 online_num = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          online_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MsgDBUpdateOnlineNum::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgDBUpdateOnlineNum)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 server_id = 1;
  if (this->server_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_server_id(), target);
  }

  // int32 port = 2;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_port(), target);
  }

  // int32 online_num = 3;
  if (this->online_num() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_online_num(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgDBUpdateOnlineNum)
  return target;
}

size_t MsgDBUpdateOnlineNum::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgDBUpdateOnlineNum)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 server_id = 1;
  if (this->server_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_server_id());
  }

  // int32 port = 2;
  if (this->port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_port());
  }

  // int32 online_num = 3;
  if (this->online_num() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_online_num());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MsgDBUpdateOnlineNum::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MsgDBUpdateOnlineNum)
  GOOGLE_DCHECK_NE(&from, this);
  const MsgDBUpdateOnlineNum* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MsgDBUpdateOnlineNum>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MsgDBUpdateOnlineNum)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MsgDBUpdateOnlineNum)
    MergeFrom(*source);
  }
}

void MsgDBUpdateOnlineNum::MergeFrom(const MsgDBUpdateOnlineNum& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgDBUpdateOnlineNum)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.server_id() != 0) {
    _internal_set_server_id(from._internal_server_id());
  }
  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
  if (from.online_num() != 0) {
    _internal_set_online_num(from._internal_online_num());
  }
}

void MsgDBUpdateOnlineNum::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MsgDBUpdateOnlineNum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgDBUpdateOnlineNum::CopyFrom(const MsgDBUpdateOnlineNum& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgDBUpdateOnlineNum)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgDBUpdateOnlineNum::IsInitialized() const {
  return true;
}

void MsgDBUpdateOnlineNum::InternalSwap(MsgDBUpdateOnlineNum* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MsgDBUpdateOnlineNum, online_num_)
      + sizeof(MsgDBUpdateOnlineNum::online_num_)
      - PROTOBUF_FIELD_OFFSET(MsgDBUpdateOnlineNum, server_id_)>(
          reinterpret_cast<char*>(&server_id_),
          reinterpret_cast<char*>(&other->server_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgDBUpdateOnlineNum::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class MsgDBRegisterLogin::_Internal {
 public:
};

MsgDBRegisterLogin::MsgDBRegisterLogin(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:MsgDBRegisterLogin)
}
MsgDBRegisterLogin::MsgDBRegisterLogin(const MsgDBRegisterLogin& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&server_id_, &from.server_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&port_) -
    reinterpret_cast<char*>(&server_id_)) + sizeof(port_));
  // @@protoc_insertion_point(copy_constructor:MsgDBRegisterLogin)
}

void MsgDBRegisterLogin::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&server_id_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&port_) -
      reinterpret_cast<char*>(&server_id_)) + sizeof(port_));
}

MsgDBRegisterLogin::~MsgDBRegisterLogin() {
  // @@protoc_insertion_point(destructor:MsgDBRegisterLogin)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MsgDBRegisterLogin::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void MsgDBRegisterLogin::ArenaDtor(void* object) {
  MsgDBRegisterLogin* _this = reinterpret_cast< MsgDBRegisterLogin* >(object);
  (void)_this;
}
void MsgDBRegisterLogin::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MsgDBRegisterLogin::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MsgDBRegisterLogin& MsgDBRegisterLogin::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MsgDBRegisterLogin_ServerInternalProto_2eproto.base);
  return *internal_default_instance();
}


void MsgDBRegisterLogin::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgDBRegisterLogin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&server_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&port_) -
      reinterpret_cast<char*>(&server_id_)) + sizeof(port_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgDBRegisterLogin::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 server_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          server_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 port = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MsgDBRegisterLogin::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgDBRegisterLogin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 server_id = 1;
  if (this->server_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_server_id(), target);
  }

  // int32 port = 2;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_port(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgDBRegisterLogin)
  return target;
}

size_t MsgDBRegisterLogin::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgDBRegisterLogin)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 server_id = 1;
  if (this->server_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_server_id());
  }

  // int32 port = 2;
  if (this->port() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MsgDBRegisterLogin::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MsgDBRegisterLogin)
  GOOGLE_DCHECK_NE(&from, this);
  const MsgDBRegisterLogin* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MsgDBRegisterLogin>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MsgDBRegisterLogin)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MsgDBRegisterLogin)
    MergeFrom(*source);
  }
}

void MsgDBRegisterLogin::MergeFrom(const MsgDBRegisterLogin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgDBRegisterLogin)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.server_id() != 0) {
    _internal_set_server_id(from._internal_server_id());
  }
  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
}

void MsgDBRegisterLogin::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MsgDBRegisterLogin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgDBRegisterLogin::CopyFrom(const MsgDBRegisterLogin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgDBRegisterLogin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgDBRegisterLogin::IsInitialized() const {
  return true;
}

void MsgDBRegisterLogin::InternalSwap(MsgDBRegisterLogin* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MsgDBRegisterLogin, port_)
      + sizeof(MsgDBRegisterLogin::port_)
      - PROTOBUF_FIELD_OFFSET(MsgDBRegisterLogin, server_id_)>(
          reinterpret_cast<char*>(&server_id_),
          reinterpret_cast<char*>(&other->server_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgDBRegisterLogin::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::MsgRegisterServer* Arena::CreateMaybeMessage< ::MsgRegisterServer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MsgRegisterServer >(arena);
}
template<> PROTOBUF_NOINLINE ::MsgDBUpdateOnlineNum* Arena::CreateMaybeMessage< ::MsgDBUpdateOnlineNum >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MsgDBUpdateOnlineNum >(arena);
}
template<> PROTOBUF_NOINLINE ::MsgDBRegisterLogin* Arena::CreateMaybeMessage< ::MsgDBRegisterLogin >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MsgDBRegisterLogin >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>