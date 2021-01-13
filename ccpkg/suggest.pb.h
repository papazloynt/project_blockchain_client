// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: suggest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_suggest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_suggest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_suggest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_suggest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_suggest_2eproto;
namespace suggest {
class SuggestAnswer;
class SuggestAnswerDefaultTypeInternal;
extern SuggestAnswerDefaultTypeInternal _SuggestAnswer_default_instance_;
class SuggestRequest;
class SuggestRequestDefaultTypeInternal;
extern SuggestRequestDefaultTypeInternal _SuggestRequest_default_instance_;
class SuggestResponse;
class SuggestResponseDefaultTypeInternal;
extern SuggestResponseDefaultTypeInternal _SuggestResponse_default_instance_;
}  // namespace suggest
PROTOBUF_NAMESPACE_OPEN
template<> ::suggest::SuggestAnswer* Arena::CreateMaybeMessage<::suggest::SuggestAnswer>(Arena*);
template<> ::suggest::SuggestRequest* Arena::CreateMaybeMessage<::suggest::SuggestRequest>(Arena*);
template<> ::suggest::SuggestResponse* Arena::CreateMaybeMessage<::suggest::SuggestResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace suggest {

// ===================================================================

class SuggestRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:suggest.SuggestRequest) */ {
 public:
  inline SuggestRequest() : SuggestRequest(nullptr) {};
  virtual ~SuggestRequest();

  SuggestRequest(const SuggestRequest& from);
  SuggestRequest(SuggestRequest&& from) noexcept
    : SuggestRequest() {
    *this = ::std::move(from);
  }

  inline SuggestRequest& operator=(const SuggestRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SuggestRequest& operator=(SuggestRequest&& from) noexcept {
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
  static const SuggestRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SuggestRequest* internal_default_instance() {
    return reinterpret_cast<const SuggestRequest*>(
               &_SuggestRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SuggestRequest& a, SuggestRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SuggestRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SuggestRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SuggestRequest* New() const final {
    return CreateMaybeMessage<SuggestRequest>(nullptr);
  }

  SuggestRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SuggestRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SuggestRequest& from);
  void MergeFrom(const SuggestRequest& from);
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
  void InternalSwap(SuggestRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "suggest.SuggestRequest";
  }
  protected:
  explicit SuggestRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_suggest_2eproto);
    return ::descriptor_table_suggest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInputFieldNumber = 1,
  };
  // string input = 1;
  void clear_input();
  const std::string& input() const;
  void set_input(const std::string& value);
  void set_input(std::string&& value);
  void set_input(const char* value);
  void set_input(const char* value, size_t size);
  std::string* mutable_input();
  std::string* release_input();
  void set_allocated_input(std::string* input);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_input();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_input(
      std::string* input);
  private:
  const std::string& _internal_input() const;
  void _internal_set_input(const std::string& value);
  std::string* _internal_mutable_input();
  public:

  // @@protoc_insertion_point(class_scope:suggest.SuggestRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr input_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_suggest_2eproto;
};
// -------------------------------------------------------------------

class SuggestAnswer PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:suggest.SuggestAnswer) */ {
 public:
  inline SuggestAnswer() : SuggestAnswer(nullptr) {};
  virtual ~SuggestAnswer();

  SuggestAnswer(const SuggestAnswer& from);
  SuggestAnswer(SuggestAnswer&& from) noexcept
    : SuggestAnswer() {
    *this = ::std::move(from);
  }

  inline SuggestAnswer& operator=(const SuggestAnswer& from) {
    CopyFrom(from);
    return *this;
  }
  inline SuggestAnswer& operator=(SuggestAnswer&& from) noexcept {
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
  static const SuggestAnswer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SuggestAnswer* internal_default_instance() {
    return reinterpret_cast<const SuggestAnswer*>(
               &_SuggestAnswer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SuggestAnswer& a, SuggestAnswer& b) {
    a.Swap(&b);
  }
  inline void Swap(SuggestAnswer* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SuggestAnswer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SuggestAnswer* New() const final {
    return CreateMaybeMessage<SuggestAnswer>(nullptr);
  }

  SuggestAnswer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SuggestAnswer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SuggestAnswer& from);
  void MergeFrom(const SuggestAnswer& from);
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
  void InternalSwap(SuggestAnswer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "suggest.SuggestAnswer";
  }
  protected:
  explicit SuggestAnswer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_suggest_2eproto);
    return ::descriptor_table_suggest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextFieldNumber = 1,
    kPositionFieldNumber = 2,
  };
  // string text = 1;
  void clear_text();
  const std::string& text() const;
  void set_text(const std::string& value);
  void set_text(std::string&& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  std::string* mutable_text();
  std::string* release_text();
  void set_allocated_text(std::string* text);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_text();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_text(
      std::string* text);
  private:
  const std::string& _internal_text() const;
  void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // uint32 position = 2;
  void clear_position();
  ::PROTOBUF_NAMESPACE_ID::uint32 position() const;
  void set_position(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_position() const;
  void _internal_set_position(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:suggest.SuggestAnswer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  ::PROTOBUF_NAMESPACE_ID::uint32 position_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_suggest_2eproto;
};
// -------------------------------------------------------------------

class SuggestResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:suggest.SuggestResponse) */ {
 public:
  inline SuggestResponse() : SuggestResponse(nullptr) {};
  virtual ~SuggestResponse();

  SuggestResponse(const SuggestResponse& from);
  SuggestResponse(SuggestResponse&& from) noexcept
    : SuggestResponse() {
    *this = ::std::move(from);
  }

  inline SuggestResponse& operator=(const SuggestResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SuggestResponse& operator=(SuggestResponse&& from) noexcept {
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
  static const SuggestResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SuggestResponse* internal_default_instance() {
    return reinterpret_cast<const SuggestResponse*>(
               &_SuggestResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SuggestResponse& a, SuggestResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SuggestResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SuggestResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SuggestResponse* New() const final {
    return CreateMaybeMessage<SuggestResponse>(nullptr);
  }

  SuggestResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SuggestResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SuggestResponse& from);
  void MergeFrom(const SuggestResponse& from);
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
  void InternalSwap(SuggestResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "suggest.SuggestResponse";
  }
  protected:
  explicit SuggestResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_suggest_2eproto);
    return ::descriptor_table_suggest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSuggFieldNumber = 1,
  };
  // repeated .suggest.SuggestAnswer sugg = 1;
  int sugg_size() const;
  private:
  int _internal_sugg_size() const;
  public:
  void clear_sugg();
  ::suggest::SuggestAnswer* mutable_sugg(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::suggest::SuggestAnswer >*
      mutable_sugg();
  private:
  const ::suggest::SuggestAnswer& _internal_sugg(int index) const;
  ::suggest::SuggestAnswer* _internal_add_sugg();
  public:
  const ::suggest::SuggestAnswer& sugg(int index) const;
  ::suggest::SuggestAnswer* add_sugg();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::suggest::SuggestAnswer >&
      sugg() const;

  // @@protoc_insertion_point(class_scope:suggest.SuggestResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::suggest::SuggestAnswer > sugg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_suggest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SuggestRequest

// string input = 1;
inline void SuggestRequest::clear_input() {
  input_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SuggestRequest::input() const {
  // @@protoc_insertion_point(field_get:suggest.SuggestRequest.input)
  return _internal_input();
}
inline void SuggestRequest::set_input(const std::string& value) {
  _internal_set_input(value);
  // @@protoc_insertion_point(field_set:suggest.SuggestRequest.input)
}
inline std::string* SuggestRequest::mutable_input() {
  // @@protoc_insertion_point(field_mutable:suggest.SuggestRequest.input)
  return _internal_mutable_input();
}
inline const std::string& SuggestRequest::_internal_input() const {
  return input_.Get();
}
inline void SuggestRequest::_internal_set_input(const std::string& value) {
  
  input_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SuggestRequest::set_input(std::string&& value) {
  
  input_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:suggest.SuggestRequest.input)
}
inline void SuggestRequest::set_input(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  input_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:suggest.SuggestRequest.input)
}
inline void SuggestRequest::set_input(const char* value,
    size_t size) {
  
  input_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:suggest.SuggestRequest.input)
}
inline std::string* SuggestRequest::_internal_mutable_input() {
  
  return input_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SuggestRequest::release_input() {
  // @@protoc_insertion_point(field_release:suggest.SuggestRequest.input)
  return input_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SuggestRequest::set_allocated_input(std::string* input) {
  if (input != nullptr) {
    
  } else {
    
  }
  input_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), input,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:suggest.SuggestRequest.input)
}
inline std::string* SuggestRequest::unsafe_arena_release_input() {
  // @@protoc_insertion_point(field_unsafe_arena_release:suggest.SuggestRequest.input)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return input_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SuggestRequest::unsafe_arena_set_allocated_input(
    std::string* input) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (input != nullptr) {
    
  } else {
    
  }
  input_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      input, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:suggest.SuggestRequest.input)
}

// -------------------------------------------------------------------

// SuggestAnswer

// string text = 1;
inline void SuggestAnswer::clear_text() {
  text_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SuggestAnswer::text() const {
  // @@protoc_insertion_point(field_get:suggest.SuggestAnswer.text)
  return _internal_text();
}
inline void SuggestAnswer::set_text(const std::string& value) {
  _internal_set_text(value);
  // @@protoc_insertion_point(field_set:suggest.SuggestAnswer.text)
}
inline std::string* SuggestAnswer::mutable_text() {
  // @@protoc_insertion_point(field_mutable:suggest.SuggestAnswer.text)
  return _internal_mutable_text();
}
inline const std::string& SuggestAnswer::_internal_text() const {
  return text_.Get();
}
inline void SuggestAnswer::_internal_set_text(const std::string& value) {
  
  text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SuggestAnswer::set_text(std::string&& value) {
  
  text_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:suggest.SuggestAnswer.text)
}
inline void SuggestAnswer::set_text(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:suggest.SuggestAnswer.text)
}
inline void SuggestAnswer::set_text(const char* value,
    size_t size) {
  
  text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:suggest.SuggestAnswer.text)
}
inline std::string* SuggestAnswer::_internal_mutable_text() {
  
  return text_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SuggestAnswer::release_text() {
  // @@protoc_insertion_point(field_release:suggest.SuggestAnswer.text)
  return text_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SuggestAnswer::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:suggest.SuggestAnswer.text)
}
inline std::string* SuggestAnswer::unsafe_arena_release_text() {
  // @@protoc_insertion_point(field_unsafe_arena_release:suggest.SuggestAnswer.text)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return text_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SuggestAnswer::unsafe_arena_set_allocated_text(
    std::string* text) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (text != nullptr) {
    
  } else {
    
  }
  text_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      text, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:suggest.SuggestAnswer.text)
}

// uint32 position = 2;
inline void SuggestAnswer::clear_position() {
  position_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SuggestAnswer::_internal_position() const {
  return position_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SuggestAnswer::position() const {
  // @@protoc_insertion_point(field_get:suggest.SuggestAnswer.position)
  return _internal_position();
}
inline void SuggestAnswer::_internal_set_position(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  position_ = value;
}
inline void SuggestAnswer::set_position(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_position(value);
  // @@protoc_insertion_point(field_set:suggest.SuggestAnswer.position)
}

// -------------------------------------------------------------------

// SuggestResponse

// repeated .suggest.SuggestAnswer sugg = 1;
inline int SuggestResponse::_internal_sugg_size() const {
  return sugg_.size();
}
inline int SuggestResponse::sugg_size() const {
  return _internal_sugg_size();
}
inline void SuggestResponse::clear_sugg() {
  sugg_.Clear();
}
inline ::suggest::SuggestAnswer* SuggestResponse::mutable_sugg(int index) {
  // @@protoc_insertion_point(field_mutable:suggest.SuggestResponse.sugg)
  return sugg_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::suggest::SuggestAnswer >*
SuggestResponse::mutable_sugg() {
  // @@protoc_insertion_point(field_mutable_list:suggest.SuggestResponse.sugg)
  return &sugg_;
}
inline const ::suggest::SuggestAnswer& SuggestResponse::_internal_sugg(int index) const {
  return sugg_.Get(index);
}
inline const ::suggest::SuggestAnswer& SuggestResponse::sugg(int index) const {
  // @@protoc_insertion_point(field_get:suggest.SuggestResponse.sugg)
  return _internal_sugg(index);
}
inline ::suggest::SuggestAnswer* SuggestResponse::_internal_add_sugg() {
  return sugg_.Add();
}
inline ::suggest::SuggestAnswer* SuggestResponse::add_sugg() {
  // @@protoc_insertion_point(field_add:suggest.SuggestResponse.sugg)
  return _internal_add_sugg();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::suggest::SuggestAnswer >&
SuggestResponse::sugg() const {
  // @@protoc_insertion_point(field_list:suggest.SuggestResponse.sugg)
  return sugg_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace suggest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_suggest_2eproto
