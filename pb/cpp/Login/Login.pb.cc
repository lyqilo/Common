// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#include "Login.pb.h"

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
class MsgPlayerLoginDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MsgPlayerLogin> _instance;
} _MsgPlayerLogin_default_instance_;
class MsgPlayerLoginRespDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MsgPlayerLoginResp> _instance;
} _MsgPlayerLoginResp_default_instance_;
static void InitDefaultsscc_info_MsgPlayerLogin_Login_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MsgPlayerLogin_default_instance_;
    new (ptr) ::MsgPlayerLogin();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MsgPlayerLogin_Login_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MsgPlayerLogin_Login_2eproto}, {}};

static void InitDefaultsscc_info_MsgPlayerLoginResp_Login_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MsgPlayerLoginResp_default_instance_;
    new (ptr) ::MsgPlayerLoginResp();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MsgPlayerLoginResp_Login_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MsgPlayerLoginResp_Login_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Login_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Login_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Login_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Login_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLogin, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLogin, account_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, res_code_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, user_id_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, beautiful_id_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, nickname_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, user_type_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, coin_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, bank_coin_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, head_id_),
  PROTOBUF_FIELD_OFFSET(::MsgPlayerLoginResp, phone_num_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::MsgPlayerLogin)},
  { 6, -1, sizeof(::MsgPlayerLoginResp)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MsgPlayerLogin_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MsgPlayerLoginResp_default_instance_),
};

const char descriptor_table_protodef_Login_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Login.proto\"!\n\016MsgPlayerLogin\022\017\n\007accou"
  "nt\030\001 \001(\t\"\267\001\n\022MsgPlayerLoginResp\022\020\n\010res_c"
  "ode\030\001 \001(\005\022\017\n\007user_id\030\002 \001(\005\022\024\n\014beautiful_"
  "id\030\003 \001(\005\022\020\n\010nickname\030\004 \001(\t\022\021\n\tuser_type\030"
  "\005 \001(\005\022\014\n\004coin\030\006 \001(\004\022\021\n\tbank_coin\030\007 \001(\004\022\017"
  "\n\007head_id\030\010 \001(\005\022\021\n\tphone_num\030\t \001(\tb\006prot"
  "o3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Login_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Login_2eproto_sccs[2] = {
  &scc_info_MsgPlayerLogin_Login_2eproto.base,
  &scc_info_MsgPlayerLoginResp_Login_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Login_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Login_2eproto = {
  false, false, descriptor_table_protodef_Login_2eproto, "Login.proto", 242,
  &descriptor_table_Login_2eproto_once, descriptor_table_Login_2eproto_sccs, descriptor_table_Login_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_Login_2eproto::offsets,
  file_level_metadata_Login_2eproto, 2, file_level_enum_descriptors_Login_2eproto, file_level_service_descriptors_Login_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Login_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Login_2eproto)), true);

// ===================================================================

class MsgPlayerLogin::_Internal {
 public:
};

MsgPlayerLogin::MsgPlayerLogin(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:MsgPlayerLogin)
}
MsgPlayerLogin::MsgPlayerLogin(const MsgPlayerLogin& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  account_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_account().empty()) {
    account_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_account(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:MsgPlayerLogin)
}

void MsgPlayerLogin::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MsgPlayerLogin_Login_2eproto.base);
  account_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

MsgPlayerLogin::~MsgPlayerLogin() {
  // @@protoc_insertion_point(destructor:MsgPlayerLogin)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MsgPlayerLogin::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  account_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MsgPlayerLogin::ArenaDtor(void* object) {
  MsgPlayerLogin* _this = reinterpret_cast< MsgPlayerLogin* >(object);
  (void)_this;
}
void MsgPlayerLogin::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MsgPlayerLogin::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MsgPlayerLogin& MsgPlayerLogin::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MsgPlayerLogin_Login_2eproto.base);
  return *internal_default_instance();
}


void MsgPlayerLogin::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgPlayerLogin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  account_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgPlayerLogin::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_account();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "MsgPlayerLogin.account"));
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

::PROTOBUF_NAMESPACE_ID::uint8* MsgPlayerLogin::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgPlayerLogin)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string account = 1;
  if (this->account().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_account().data(), static_cast<int>(this->_internal_account().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MsgPlayerLogin.account");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_account(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgPlayerLogin)
  return target;
}

size_t MsgPlayerLogin::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgPlayerLogin)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string account = 1;
  if (this->account().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_account());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MsgPlayerLogin::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MsgPlayerLogin)
  GOOGLE_DCHECK_NE(&from, this);
  const MsgPlayerLogin* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MsgPlayerLogin>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MsgPlayerLogin)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MsgPlayerLogin)
    MergeFrom(*source);
  }
}

void MsgPlayerLogin::MergeFrom(const MsgPlayerLogin& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgPlayerLogin)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.account().size() > 0) {
    _internal_set_account(from._internal_account());
  }
}

void MsgPlayerLogin::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MsgPlayerLogin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgPlayerLogin::CopyFrom(const MsgPlayerLogin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgPlayerLogin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgPlayerLogin::IsInitialized() const {
  return true;
}

void MsgPlayerLogin::InternalSwap(MsgPlayerLogin* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  account_.Swap(&other->account_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgPlayerLogin::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class MsgPlayerLoginResp::_Internal {
 public:
};

MsgPlayerLoginResp::MsgPlayerLoginResp(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:MsgPlayerLoginResp)
}
MsgPlayerLoginResp::MsgPlayerLoginResp(const MsgPlayerLoginResp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  nickname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_nickname().empty()) {
    nickname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_nickname(), 
      GetArena());
  }
  phone_num_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_phone_num().empty()) {
    phone_num_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_phone_num(), 
      GetArena());
  }
  ::memcpy(&res_code_, &from.res_code_,
    static_cast<size_t>(reinterpret_cast<char*>(&head_id_) -
    reinterpret_cast<char*>(&res_code_)) + sizeof(head_id_));
  // @@protoc_insertion_point(copy_constructor:MsgPlayerLoginResp)
}

void MsgPlayerLoginResp::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MsgPlayerLoginResp_Login_2eproto.base);
  nickname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  phone_num_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&res_code_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&head_id_) -
      reinterpret_cast<char*>(&res_code_)) + sizeof(head_id_));
}

MsgPlayerLoginResp::~MsgPlayerLoginResp() {
  // @@protoc_insertion_point(destructor:MsgPlayerLoginResp)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MsgPlayerLoginResp::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  nickname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  phone_num_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MsgPlayerLoginResp::ArenaDtor(void* object) {
  MsgPlayerLoginResp* _this = reinterpret_cast< MsgPlayerLoginResp* >(object);
  (void)_this;
}
void MsgPlayerLoginResp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MsgPlayerLoginResp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MsgPlayerLoginResp& MsgPlayerLoginResp::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MsgPlayerLoginResp_Login_2eproto.base);
  return *internal_default_instance();
}


void MsgPlayerLoginResp::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgPlayerLoginResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nickname_.ClearToEmpty();
  phone_num_.ClearToEmpty();
  ::memset(&res_code_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&head_id_) -
      reinterpret_cast<char*>(&res_code_)) + sizeof(head_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgPlayerLoginResp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 res_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          res_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 user_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          user_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 beautiful_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          beautiful_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string nickname = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_nickname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "MsgPlayerLoginResp.nickname"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 user_type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          user_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 coin = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          coin_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 bank_coin = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          bank_coin_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 head_id = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          head_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string phone_num = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_phone_num();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "MsgPlayerLoginResp.phone_num"));
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

::PROTOBUF_NAMESPACE_ID::uint8* MsgPlayerLoginResp::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgPlayerLoginResp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 res_code = 1;
  if (this->res_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_res_code(), target);
  }

  // int32 user_id = 2;
  if (this->user_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_user_id(), target);
  }

  // int32 beautiful_id = 3;
  if (this->beautiful_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_beautiful_id(), target);
  }

  // string nickname = 4;
  if (this->nickname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_nickname().data(), static_cast<int>(this->_internal_nickname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MsgPlayerLoginResp.nickname");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_nickname(), target);
  }

  // int32 user_type = 5;
  if (this->user_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_user_type(), target);
  }

  // uint64 coin = 6;
  if (this->coin() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(6, this->_internal_coin(), target);
  }

  // uint64 bank_coin = 7;
  if (this->bank_coin() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(7, this->_internal_bank_coin(), target);
  }

  // int32 head_id = 8;
  if (this->head_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(8, this->_internal_head_id(), target);
  }

  // string phone_num = 9;
  if (this->phone_num().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_phone_num().data(), static_cast<int>(this->_internal_phone_num().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MsgPlayerLoginResp.phone_num");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_phone_num(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgPlayerLoginResp)
  return target;
}

size_t MsgPlayerLoginResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgPlayerLoginResp)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string nickname = 4;
  if (this->nickname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nickname());
  }

  // string phone_num = 9;
  if (this->phone_num().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone_num());
  }

  // int32 res_code = 1;
  if (this->res_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_res_code());
  }

  // int32 user_id = 2;
  if (this->user_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_user_id());
  }

  // int32 beautiful_id = 3;
  if (this->beautiful_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_beautiful_id());
  }

  // int32 user_type = 5;
  if (this->user_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_user_type());
  }

  // uint64 coin = 6;
  if (this->coin() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_coin());
  }

  // uint64 bank_coin = 7;
  if (this->bank_coin() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_bank_coin());
  }

  // int32 head_id = 8;
  if (this->head_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_head_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MsgPlayerLoginResp::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MsgPlayerLoginResp)
  GOOGLE_DCHECK_NE(&from, this);
  const MsgPlayerLoginResp* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MsgPlayerLoginResp>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MsgPlayerLoginResp)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MsgPlayerLoginResp)
    MergeFrom(*source);
  }
}

void MsgPlayerLoginResp::MergeFrom(const MsgPlayerLoginResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgPlayerLoginResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.nickname().size() > 0) {
    _internal_set_nickname(from._internal_nickname());
  }
  if (from.phone_num().size() > 0) {
    _internal_set_phone_num(from._internal_phone_num());
  }
  if (from.res_code() != 0) {
    _internal_set_res_code(from._internal_res_code());
  }
  if (from.user_id() != 0) {
    _internal_set_user_id(from._internal_user_id());
  }
  if (from.beautiful_id() != 0) {
    _internal_set_beautiful_id(from._internal_beautiful_id());
  }
  if (from.user_type() != 0) {
    _internal_set_user_type(from._internal_user_type());
  }
  if (from.coin() != 0) {
    _internal_set_coin(from._internal_coin());
  }
  if (from.bank_coin() != 0) {
    _internal_set_bank_coin(from._internal_bank_coin());
  }
  if (from.head_id() != 0) {
    _internal_set_head_id(from._internal_head_id());
  }
}

void MsgPlayerLoginResp::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MsgPlayerLoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgPlayerLoginResp::CopyFrom(const MsgPlayerLoginResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgPlayerLoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgPlayerLoginResp::IsInitialized() const {
  return true;
}

void MsgPlayerLoginResp::InternalSwap(MsgPlayerLoginResp* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  nickname_.Swap(&other->nickname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  phone_num_.Swap(&other->phone_num_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MsgPlayerLoginResp, head_id_)
      + sizeof(MsgPlayerLoginResp::head_id_)
      - PROTOBUF_FIELD_OFFSET(MsgPlayerLoginResp, res_code_)>(
          reinterpret_cast<char*>(&res_code_),
          reinterpret_cast<char*>(&other->res_code_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgPlayerLoginResp::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::MsgPlayerLogin* Arena::CreateMaybeMessage< ::MsgPlayerLogin >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MsgPlayerLogin >(arena);
}
template<> PROTOBUF_NOINLINE ::MsgPlayerLoginResp* Arena::CreateMaybeMessage< ::MsgPlayerLoginResp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MsgPlayerLoginResp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>