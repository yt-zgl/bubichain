// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* Lock_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Lock_reflection_ = NULL;
const ::google::protobuf::Descriptor* Unlock_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Unlock_reflection_ = NULL;
const ::google::protobuf::Descriptor* OperationLockUnLock_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationLockUnLock_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* OperationLockUnLock_Action_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  Lock_descriptor_ = file->message_type(0);
  static const int Lock_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Lock, depositary_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Lock, starttime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Lock, endtime_),
  };
  Lock_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Lock_descriptor_,
      Lock::default_instance_,
      Lock_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Lock, _has_bits_[0]),
      -1,
      -1,
      sizeof(Lock),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Lock, _internal_metadata_),
      -1);
  Unlock_descriptor_ = file->message_type(1);
  static const int Unlock_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unlock, depositary_),
  };
  Unlock_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Unlock_descriptor_,
      Unlock::default_instance_,
      Unlock_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unlock, _has_bits_[0]),
      -1,
      -1,
      sizeof(Unlock),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unlock, _internal_metadata_),
      -1);
  OperationLockUnLock_descriptor_ = file->message_type(2);
  static const int OperationLockUnLock_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLockUnLock, destaddress_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLockUnLock, lock_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLockUnLock, unlock_),
  };
  OperationLockUnLock_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationLockUnLock_descriptor_,
      OperationLockUnLock::default_instance_,
      OperationLockUnLock_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLockUnLock, _has_bits_[0]),
      -1,
      -1,
      sizeof(OperationLockUnLock),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationLockUnLock, _internal_metadata_),
      -1);
  OperationLockUnLock_Action_descriptor_ = OperationLockUnLock_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Lock_descriptor_, &Lock::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Unlock_descriptor_, &Unlock::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationLockUnLock_descriptor_, &OperationLockUnLock::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete Lock::default_instance_;
  delete Lock_reflection_;
  delete Unlock::default_instance_;
  delete Unlock_reflection_;
  delete OperationLockUnLock::default_instance_;
  delete OperationLockUnLock_reflection_;
}

void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\">\n\004Lock\022\022\n\ndepositary\030\001 \002(\t"
    "\022\021\n\tstarttime\030\002 \002(\003\022\017\n\007endtime\030\003 \002(\003\"\034\n\006"
    "Unlock\022\022\n\ndepositary\030\001 \002(\t\"x\n\023OperationL"
    "ockUnLock\022\023\n\013destAddress\030\001 \002(\t\022\023\n\004lock\030\002"
    " \001(\0132\005.Lock\022\027\n\006unlock\030\003 \001(\0132\007.Unlock\"\036\n\006"
    "Action\022\010\n\004LOCK\020\000\022\n\n\006UNLOCK\020\001", 228);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  Lock::default_instance_ = new Lock();
  Unlock::default_instance_ = new Unlock();
  OperationLockUnLock::default_instance_ = new OperationLockUnLock();
  Lock::default_instance_->InitAsDefaultInstance();
  Unlock::default_instance_->InitAsDefaultInstance();
  OperationLockUnLock::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Lock::kDepositaryFieldNumber;
const int Lock::kStarttimeFieldNumber;
const int Lock::kEndtimeFieldNumber;
#endif  // !_MSC_VER

Lock::Lock()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Lock)
}

void Lock::InitAsDefaultInstance() {
}

Lock::Lock(const Lock& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Lock)
}

void Lock::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  depositary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  starttime_ = GOOGLE_LONGLONG(0);
  endtime_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Lock::~Lock() {
  // @@protoc_insertion_point(destructor:Lock)
  SharedDtor();
}

void Lock::SharedDtor() {
  depositary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Lock::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Lock::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Lock_descriptor_;
}

const Lock& Lock::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

Lock* Lock::default_instance_ = NULL;

Lock* Lock::New(::google::protobuf::Arena* arena) const {
  Lock* n = new Lock;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Lock::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Lock*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(starttime_, endtime_);
    if (has_depositary()) {
      depositary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Lock::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Lock)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string depositary = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_depositary()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->depositary().data(), this->depositary().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Lock.depositary");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_starttime;
        break;
      }

      // required int64 starttime = 2;
      case 2: {
        if (tag == 16) {
         parse_starttime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &starttime_)));
          set_has_starttime();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_endtime;
        break;
      }

      // required int64 endtime = 3;
      case 3: {
        if (tag == 24) {
         parse_endtime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &endtime_)));
          set_has_endtime();
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
  // @@protoc_insertion_point(parse_success:Lock)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Lock)
  return false;
#undef DO_
}

void Lock::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Lock)
  // required string depositary = 1;
  if (has_depositary()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->depositary().data(), this->depositary().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Lock.depositary");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->depositary(), output);
  }

  // required int64 starttime = 2;
  if (has_starttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->starttime(), output);
  }

  // required int64 endtime = 3;
  if (has_endtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->endtime(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Lock)
}

::google::protobuf::uint8* Lock::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Lock)
  // required string depositary = 1;
  if (has_depositary()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->depositary().data(), this->depositary().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Lock.depositary");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->depositary(), target);
  }

  // required int64 starttime = 2;
  if (has_starttime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->starttime(), target);
  }

  // required int64 endtime = 3;
  if (has_endtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->endtime(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Lock)
  return target;
}

int Lock::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_depositary()) {
    // required string depositary = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->depositary());
  }

  if (has_starttime()) {
    // required int64 starttime = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->starttime());
  }

  if (has_endtime()) {
    // required int64 endtime = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->endtime());
  }

  return total_size;
}
int Lock::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string depositary = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->depositary());

    // required int64 starttime = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->starttime());

    // required int64 endtime = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->endtime());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Lock::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Lock* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Lock*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Lock::MergeFrom(const Lock& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_depositary()) {
      set_has_depositary();
      depositary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.depositary_);
    }
    if (from.has_starttime()) {
      set_starttime(from.starttime());
    }
    if (from.has_endtime()) {
      set_endtime(from.endtime());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Lock::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Lock::CopyFrom(const Lock& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Lock::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Lock::Swap(Lock* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Lock::InternalSwap(Lock* other) {
  depositary_.Swap(&other->depositary_);
  std::swap(starttime_, other->starttime_);
  std::swap(endtime_, other->endtime_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Lock::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Lock_descriptor_;
  metadata.reflection = Lock_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Unlock::kDepositaryFieldNumber;
#endif  // !_MSC_VER

Unlock::Unlock()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Unlock)
}

void Unlock::InitAsDefaultInstance() {
}

Unlock::Unlock(const Unlock& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Unlock)
}

void Unlock::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  depositary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Unlock::~Unlock() {
  // @@protoc_insertion_point(destructor:Unlock)
  SharedDtor();
}

void Unlock::SharedDtor() {
  depositary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Unlock::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Unlock::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Unlock_descriptor_;
}

const Unlock& Unlock::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

Unlock* Unlock::default_instance_ = NULL;

Unlock* Unlock::New(::google::protobuf::Arena* arena) const {
  Unlock* n = new Unlock;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Unlock::Clear() {
  if (has_depositary()) {
    depositary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Unlock::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Unlock)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string depositary = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_depositary()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->depositary().data(), this->depositary().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Unlock.depositary");
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
  // @@protoc_insertion_point(parse_success:Unlock)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Unlock)
  return false;
#undef DO_
}

void Unlock::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Unlock)
  // required string depositary = 1;
  if (has_depositary()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->depositary().data(), this->depositary().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Unlock.depositary");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->depositary(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Unlock)
}

::google::protobuf::uint8* Unlock::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Unlock)
  // required string depositary = 1;
  if (has_depositary()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->depositary().data(), this->depositary().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Unlock.depositary");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->depositary(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Unlock)
  return target;
}

int Unlock::ByteSize() const {
  int total_size = 0;

  // required string depositary = 1;
  if (has_depositary()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->depositary());
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Unlock::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Unlock* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Unlock*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Unlock::MergeFrom(const Unlock& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_depositary()) {
      set_has_depositary();
      depositary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.depositary_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Unlock::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Unlock::CopyFrom(const Unlock& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Unlock::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Unlock::Swap(Unlock* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Unlock::InternalSwap(Unlock* other) {
  depositary_.Swap(&other->depositary_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Unlock::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Unlock_descriptor_;
  metadata.reflection = Unlock_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* OperationLockUnLock_Action_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationLockUnLock_Action_descriptor_;
}
bool OperationLockUnLock_Action_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const OperationLockUnLock_Action OperationLockUnLock::LOCK;
const OperationLockUnLock_Action OperationLockUnLock::UNLOCK;
const OperationLockUnLock_Action OperationLockUnLock::Action_MIN;
const OperationLockUnLock_Action OperationLockUnLock::Action_MAX;
const int OperationLockUnLock::Action_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int OperationLockUnLock::kDestAddressFieldNumber;
const int OperationLockUnLock::kLockFieldNumber;
const int OperationLockUnLock::kUnlockFieldNumber;
#endif  // !_MSC_VER

OperationLockUnLock::OperationLockUnLock()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:OperationLockUnLock)
}

void OperationLockUnLock::InitAsDefaultInstance() {
  lock_ = const_cast< ::Lock*>(&::Lock::default_instance());
  unlock_ = const_cast< ::Unlock*>(&::Unlock::default_instance());
}

OperationLockUnLock::OperationLockUnLock(const OperationLockUnLock& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:OperationLockUnLock)
}

void OperationLockUnLock::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  destaddress_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lock_ = NULL;
  unlock_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OperationLockUnLock::~OperationLockUnLock() {
  // @@protoc_insertion_point(destructor:OperationLockUnLock)
  SharedDtor();
}

void OperationLockUnLock::SharedDtor() {
  destaddress_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete lock_;
    delete unlock_;
  }
}

void OperationLockUnLock::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationLockUnLock::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationLockUnLock_descriptor_;
}

const OperationLockUnLock& OperationLockUnLock::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

OperationLockUnLock* OperationLockUnLock::default_instance_ = NULL;

OperationLockUnLock* OperationLockUnLock::New(::google::protobuf::Arena* arena) const {
  OperationLockUnLock* n = new OperationLockUnLock;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationLockUnLock::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_destaddress()) {
      destaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_lock()) {
      if (lock_ != NULL) lock_->::Lock::Clear();
    }
    if (has_unlock()) {
      if (unlock_ != NULL) unlock_->::Unlock::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool OperationLockUnLock::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:OperationLockUnLock)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string destAddress = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_destaddress()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->destaddress().data(), this->destaddress().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "OperationLockUnLock.destAddress");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_lock;
        break;
      }

      // optional .Lock lock = 2;
      case 2: {
        if (tag == 18) {
         parse_lock:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_lock()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_unlock;
        break;
      }

      // optional .Unlock unlock = 3;
      case 3: {
        if (tag == 26) {
         parse_unlock:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_unlock()));
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
  // @@protoc_insertion_point(parse_success:OperationLockUnLock)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:OperationLockUnLock)
  return false;
#undef DO_
}

void OperationLockUnLock::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:OperationLockUnLock)
  // required string destAddress = 1;
  if (has_destaddress()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->destaddress().data(), this->destaddress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "OperationLockUnLock.destAddress");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->destaddress(), output);
  }

  // optional .Lock lock = 2;
  if (has_lock()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->lock_, output);
  }

  // optional .Unlock unlock = 3;
  if (has_unlock()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->unlock_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:OperationLockUnLock)
}

::google::protobuf::uint8* OperationLockUnLock::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:OperationLockUnLock)
  // required string destAddress = 1;
  if (has_destaddress()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->destaddress().data(), this->destaddress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "OperationLockUnLock.destAddress");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->destaddress(), target);
  }

  // optional .Lock lock = 2;
  if (has_lock()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *this->lock_, target);
  }

  // optional .Unlock unlock = 3;
  if (has_unlock()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, *this->unlock_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:OperationLockUnLock)
  return target;
}

int OperationLockUnLock::ByteSize() const {
  int total_size = 0;

  // required string destAddress = 1;
  if (has_destaddress()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->destaddress());
  }
  if (_has_bits_[1 / 32] & 6) {
    // optional .Lock lock = 2;
    if (has_lock()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->lock_);
    }

    // optional .Unlock unlock = 3;
    if (has_unlock()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->unlock_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationLockUnLock::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const OperationLockUnLock* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OperationLockUnLock*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OperationLockUnLock::MergeFrom(const OperationLockUnLock& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_destaddress()) {
      set_has_destaddress();
      destaddress_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.destaddress_);
    }
    if (from.has_lock()) {
      mutable_lock()->::Lock::MergeFrom(from.lock());
    }
    if (from.has_unlock()) {
      mutable_unlock()->::Unlock::MergeFrom(from.unlock());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void OperationLockUnLock::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationLockUnLock::CopyFrom(const OperationLockUnLock& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationLockUnLock::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_lock()) {
    if (!this->lock_->IsInitialized()) return false;
  }
  if (has_unlock()) {
    if (!this->unlock_->IsInitialized()) return false;
  }
  return true;
}

void OperationLockUnLock::Swap(OperationLockUnLock* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationLockUnLock::InternalSwap(OperationLockUnLock* other) {
  destaddress_.Swap(&other->destaddress_);
  std::swap(lock_, other->lock_);
  std::swap(unlock_, other->unlock_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationLockUnLock::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationLockUnLock_descriptor_;
  metadata.reflection = OperationLockUnLock_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
