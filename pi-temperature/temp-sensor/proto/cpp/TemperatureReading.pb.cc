// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TemperatureReading.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TemperatureReading.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace messages {

namespace {

const ::google::protobuf::Descriptor* Reading_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Reading_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TemperatureReading_2eproto() {
  protobuf_AddDesc_TemperatureReading_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TemperatureReading.proto");
  GOOGLE_CHECK(file != NULL);
  Reading_descriptor_ = file->message_type(0);
  static const int Reading_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reading, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reading, temperature_),
  };
  Reading_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Reading_descriptor_,
      Reading::default_instance_,
      Reading_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reading, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Reading, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Reading));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TemperatureReading_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Reading_descriptor_, &Reading::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TemperatureReading_2eproto() {
  delete Reading::default_instance_;
  delete Reading_reflection_;
}

void protobuf_AddDesc_TemperatureReading_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030TemperatureReading.proto\022\010messages\",\n\007"
    "Reading\022\014\n\004time\030\001 \002(\003\022\023\n\013temperature\030\002 \002"
    "(\005", 82);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TemperatureReading.proto", &protobuf_RegisterTypes);
  Reading::default_instance_ = new Reading();
  Reading::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TemperatureReading_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TemperatureReading_2eproto {
  StaticDescriptorInitializer_TemperatureReading_2eproto() {
    protobuf_AddDesc_TemperatureReading_2eproto();
  }
} static_descriptor_initializer_TemperatureReading_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Reading::kTimeFieldNumber;
const int Reading::kTemperatureFieldNumber;
#endif  // !_MSC_VER

Reading::Reading()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:messages.Reading)
}

void Reading::InitAsDefaultInstance() {
}

Reading::Reading(const Reading& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:messages.Reading)
}

void Reading::SharedCtor() {
  _cached_size_ = 0;
  time_ = GOOGLE_LONGLONG(0);
  temperature_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Reading::~Reading() {
  // @@protoc_insertion_point(destructor:messages.Reading)
  SharedDtor();
}

void Reading::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Reading::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Reading::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Reading_descriptor_;
}

const Reading& Reading::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TemperatureReading_2eproto();
  return *default_instance_;
}

Reading* Reading::default_instance_ = NULL;

Reading* Reading::New() const {
  return new Reading;
}

void Reading::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Reading*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(time_, temperature_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Reading::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:messages.Reading)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 time = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_temperature;
        break;
      }

      // required int32 temperature = 2;
      case 2: {
        if (tag == 16) {
         parse_temperature:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &temperature_)));
          set_has_temperature();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:messages.Reading)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:messages.Reading)
  return false;
#undef DO_
}

void Reading::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:messages.Reading)
  // required int64 time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->time(), output);
  }

  // required int32 temperature = 2;
  if (has_temperature()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->temperature(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:messages.Reading)
}

::google::protobuf::uint8* Reading::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:messages.Reading)
  // required int64 time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->time(), target);
  }

  // required int32 temperature = 2;
  if (has_temperature()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->temperature(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:messages.Reading)
  return target;
}

int Reading::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 time = 1;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->time());
    }

    // required int32 temperature = 2;
    if (has_temperature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->temperature());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Reading::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Reading* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Reading*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Reading::MergeFrom(const Reading& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_temperature()) {
      set_temperature(from.temperature());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Reading::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Reading::CopyFrom(const Reading& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Reading::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Reading::Swap(Reading* other) {
  if (other != this) {
    std::swap(time_, other->time_);
    std::swap(temperature_, other->temperature_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Reading::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Reading_descriptor_;
  metadata.reflection = Reading_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

// @@protoc_insertion_point(global_scope)
