// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Cmd.proto

#include "Cmd.pb.h"

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
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_Cmd_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_Cmd_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Cmd_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Cmd_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_Cmd_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tCmd.proto*K\n\nEMsgIDMain\022\023\n\017EMsgIDMain_"
  "Null\020\000\022\023\n\017SERVER_REGISTER\020\001\022\023\n\017LOGIN_TO_"
  "CENTER\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Cmd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Cmd_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Cmd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Cmd_2eproto = {
  false, false, descriptor_table_protodef_Cmd_2eproto, "Cmd.proto", 96,
  &descriptor_table_Cmd_2eproto_once, descriptor_table_Cmd_2eproto_sccs, descriptor_table_Cmd_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_Cmd_2eproto::offsets,
  file_level_metadata_Cmd_2eproto, 0, file_level_enum_descriptors_Cmd_2eproto, file_level_service_descriptors_Cmd_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Cmd_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Cmd_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMsgIDMain_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Cmd_2eproto);
  return file_level_enum_descriptors_Cmd_2eproto[0];
}
bool EMsgIDMain_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
