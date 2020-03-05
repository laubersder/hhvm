/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include <unordered_map>

namespace apache {
namespace thrift {
namespace tag {
struct isRequired;
struct type;
struct name;
struct annotations;
struct order;
struct name;
struct fields;
struct mapKeyType;
struct valueType;
struct enumValues;
struct dataTypes;
struct names;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_isRequired
#define APACHE_THRIFT_ACCESSOR_isRequired
APACHE_THRIFT_DEFINE_ACCESSOR(isRequired);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_type
#define APACHE_THRIFT_ACCESSOR_type
APACHE_THRIFT_DEFINE_ACCESSOR(type);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_annotations
#define APACHE_THRIFT_ACCESSOR_annotations
APACHE_THRIFT_DEFINE_ACCESSOR(annotations);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_order
#define APACHE_THRIFT_ACCESSOR_order
APACHE_THRIFT_DEFINE_ACCESSOR(order);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fields
#define APACHE_THRIFT_ACCESSOR_fields
APACHE_THRIFT_DEFINE_ACCESSOR(fields);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_mapKeyType
#define APACHE_THRIFT_ACCESSOR_mapKeyType
APACHE_THRIFT_DEFINE_ACCESSOR(mapKeyType);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_valueType
#define APACHE_THRIFT_ACCESSOR_valueType
APACHE_THRIFT_DEFINE_ACCESSOR(valueType);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_enumValues
#define APACHE_THRIFT_ACCESSOR_enumValues
APACHE_THRIFT_DEFINE_ACCESSOR(enumValues);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_dataTypes
#define APACHE_THRIFT_ACCESSOR_dataTypes
APACHE_THRIFT_DEFINE_ACCESSOR(dataTypes);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_names
#define APACHE_THRIFT_ACCESSOR_names
APACHE_THRIFT_DEFINE_ACCESSOR(names);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace apache { namespace thrift { namespace reflection {

enum class Type {
  TYPE_VOID = 0,
  TYPE_STRING = 1,
  TYPE_BOOL = 2,
  TYPE_BYTE = 3,
  TYPE_I16 = 4,
  TYPE_I32 = 5,
  TYPE_I64 = 6,
  TYPE_DOUBLE = 7,
  TYPE_ENUM = 8,
  TYPE_LIST = 9,
  TYPE_SET = 10,
  TYPE_MAP = 11,
  TYPE_STRUCT = 12,
  TYPE_SERVICE = 13,
  TYPE_PROGRAM = 14,
  TYPE_FLOAT = 15
};




}}} // apache::thrift::reflection
namespace std {


template<> struct hash<typename ::apache::thrift::reflection::Type> : public apache::thrift::detail::enum_hash<typename ::apache::thrift::reflection::Type> {};
template<> struct equal_to<typename ::apache::thrift::reflection::Type> : public apache::thrift::detail::enum_equal_to<typename ::apache::thrift::reflection::Type> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::apache::thrift::reflection::Type>;

template <> struct TEnumTraits<::apache::thrift::reflection::Type> {
  using type = ::apache::thrift::reflection::Type;

  static constexpr std::size_t const size = 16;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::TYPE_VOID; }
  static constexpr type max() { return type::TYPE_FLOAT; }
};


}} // apache::thrift

namespace apache { namespace thrift { namespace reflection {

using _Type_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Type>;
extern const _Type_EnumMapFactory::ValuesToNamesMapType _Type_VALUES_TO_NAMES;
extern const _Type_EnumMapFactory::NamesToValuesMapType _Type_NAMES_TO_VALUES;

}}} // apache::thrift::reflection

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace apache { namespace thrift { namespace reflection {
class StructField;
class DataType;
class Schema;
}}} // apache::thrift::reflection
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache { namespace thrift { namespace reflection {
class StructField final : private apache::thrift::detail::st::ComparisonOperators<StructField> {
 public:

  StructField();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  StructField(apache::thrift::FragileConstructor, bool isRequired__arg, int64_t type__arg, ::std::string name__arg, std::unordered_map<::std::string, ::std::string> annotations__arg, int16_t order__arg);

  StructField(StructField&&) = default;

  StructField(const StructField&) = default;

  StructField& operator=(StructField&&) = default;

  StructField& operator=(const StructField&) = default;
  void __clear();

  ~StructField();

 public:
  bool isRequired;
 public:
  int64_t type;
 public:
  ::std::string name;
 private:
  std::unordered_map<::std::string, ::std::string> annotations;
 public:
  int16_t order;

 public:
  struct __isset {
    bool isRequired;
    bool type;
    bool name;
    bool annotations;
    bool order;
  } __isset = {};
  bool operator==(const StructField& rhs) const;
  bool operator<(const StructField& rhs) const;

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<::std::string, ::std::string>&> annotations_ref() const& {
    return {annotations, __isset.annotations};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<::std::string, ::std::string>&&> annotations_ref() const&& {
    return {std::move(annotations), __isset.annotations};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<::std::string, ::std::string>&> annotations_ref() & {
    return {annotations, __isset.annotations};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<::std::string, ::std::string>&&> annotations_ref() && {
    return {std::move(annotations), __isset.annotations};
  }

  bool get_isRequired() const {
    return isRequired;
  }

  bool& set_isRequired(bool isRequired_) {
    isRequired = isRequired_;
    __isset.isRequired = true;
    return isRequired;
  }

  int64_t get_type() const {
    return type;
  }

  int64_t& set_type(int64_t type_) {
    type = type_;
    __isset.type = true;
    return type;
  }

  const ::std::string& get_name() const& {
    return name;
  }

  ::std::string get_name() && {
    return std::move(name);
  }

  template <typename T_StructField_name_struct_setter = ::std::string>
  ::std::string& set_name(T_StructField_name_struct_setter&& name_) {
    name = std::forward<T_StructField_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }
  const std::unordered_map<::std::string, ::std::string>* get_annotations() const&;
  std::unordered_map<::std::string, ::std::string>* get_annotations() &;
  std::unordered_map<::std::string, ::std::string>* get_annotations() && = delete;

  template <typename T_StructField_annotations_struct_setter = std::unordered_map<::std::string, ::std::string>>
  std::unordered_map<::std::string, ::std::string>& set_annotations(T_StructField_annotations_struct_setter&& annotations_) {
    annotations = std::forward<T_StructField_annotations_struct_setter>(annotations_);
    __isset.annotations = true;
    return annotations;
  }

  int16_t get_order() const {
    return order;
  }

  int16_t& set_order(int16_t order_) {
    order = order_;
    __isset.order = true;
    return order;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< StructField >;
};

void swap(StructField& a, StructField& b);

template <class Protocol_>
uint32_t StructField::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::reflection
namespace apache { namespace thrift { namespace reflection {
class DataType final : private apache::thrift::detail::st::ComparisonOperators<DataType> {
 public:

  DataType();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  DataType(apache::thrift::FragileConstructor, ::std::string name__arg, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField> fields__arg, int64_t mapKeyType__arg, int64_t valueType__arg, std::unordered_map<::std::string, int32_t> enumValues__arg);

  DataType(DataType&&) = default;

  DataType(const DataType&) = default;

  DataType& operator=(DataType&&) = default;

  DataType& operator=(const DataType&) = default;
  void __clear();

  ~DataType();

 public:
  ::std::string name;
 private:
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField> fields;
 private:
  int64_t mapKeyType;
 private:
  int64_t valueType;
 private:
  std::unordered_map<::std::string, int32_t> enumValues;

 public:
  struct __isset {
    bool name;
    bool fields;
    bool mapKeyType;
    bool valueType;
    bool enumValues;
  } __isset = {};
  bool operator==(const DataType& rhs) const;
  bool operator<(const DataType& rhs) const;

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>&> fields_ref() const& {
    return {fields, __isset.fields};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>&&> fields_ref() const&& {
    return {std::move(fields), __isset.fields};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>&> fields_ref() & {
    return {fields, __isset.fields};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>&&> fields_ref() && {
    return {std::move(fields), __isset.fields};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int64_t&> mapKeyType_ref() const& {
    return {mapKeyType, __isset.mapKeyType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int64_t&&> mapKeyType_ref() const&& {
    return {std::move(mapKeyType), __isset.mapKeyType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int64_t&> mapKeyType_ref() & {
    return {mapKeyType, __isset.mapKeyType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int64_t&&> mapKeyType_ref() && {
    return {std::move(mapKeyType), __isset.mapKeyType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int64_t&> valueType_ref() const& {
    return {valueType, __isset.valueType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int64_t&&> valueType_ref() const&& {
    return {std::move(valueType), __isset.valueType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int64_t&> valueType_ref() & {
    return {valueType, __isset.valueType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int64_t&&> valueType_ref() && {
    return {std::move(valueType), __isset.valueType};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<::std::string, int32_t>&> enumValues_ref() const& {
    return {enumValues, __isset.enumValues};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const std::unordered_map<::std::string, int32_t>&&> enumValues_ref() const&& {
    return {std::move(enumValues), __isset.enumValues};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<::std::string, int32_t>&> enumValues_ref() & {
    return {enumValues, __isset.enumValues};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<std::unordered_map<::std::string, int32_t>&&> enumValues_ref() && {
    return {std::move(enumValues), __isset.enumValues};
  }

  const ::std::string& get_name() const& {
    return name;
  }

  ::std::string get_name() && {
    return std::move(name);
  }

  template <typename T_DataType_name_struct_setter = ::std::string>
  ::std::string& set_name(T_DataType_name_struct_setter&& name_) {
    name = std::forward<T_DataType_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }
  const std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() const&;
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() &;
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>* get_fields() && = delete;

  template <typename T_DataType_fields_struct_setter = std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>
  std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>& set_fields(T_DataType_fields_struct_setter&& fields_) {
    fields = std::forward<T_DataType_fields_struct_setter>(fields_);
    __isset.fields = true;
    return fields;
  }

  const int64_t* get_mapKeyType() const& {
    return __isset.mapKeyType ? std::addressof(mapKeyType) : nullptr;
  }

  int64_t* get_mapKeyType() & {
    return __isset.mapKeyType ? std::addressof(mapKeyType) : nullptr;
  }
  int64_t* get_mapKeyType() && = delete;

  int64_t& set_mapKeyType(int64_t mapKeyType_) {
    mapKeyType = mapKeyType_;
    __isset.mapKeyType = true;
    return mapKeyType;
  }

  const int64_t* get_valueType() const& {
    return __isset.valueType ? std::addressof(valueType) : nullptr;
  }

  int64_t* get_valueType() & {
    return __isset.valueType ? std::addressof(valueType) : nullptr;
  }
  int64_t* get_valueType() && = delete;

  int64_t& set_valueType(int64_t valueType_) {
    valueType = valueType_;
    __isset.valueType = true;
    return valueType;
  }
  const std::unordered_map<::std::string, int32_t>* get_enumValues() const&;
  std::unordered_map<::std::string, int32_t>* get_enumValues() &;
  std::unordered_map<::std::string, int32_t>* get_enumValues() && = delete;

  template <typename T_DataType_enumValues_struct_setter = std::unordered_map<::std::string, int32_t>>
  std::unordered_map<::std::string, int32_t>& set_enumValues(T_DataType_enumValues_struct_setter&& enumValues_) {
    enumValues = std::forward<T_DataType_enumValues_struct_setter>(enumValues_);
    __isset.enumValues = true;
    return enumValues;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< DataType >;
};

void swap(DataType& a, DataType& b);

template <class Protocol_>
uint32_t DataType::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::reflection
namespace apache { namespace thrift { namespace reflection {
class Schema final : private apache::thrift::detail::st::ComparisonOperators<Schema> {
 public:

  Schema() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Schema(apache::thrift::FragileConstructor, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> dataTypes__arg, std::unordered_map<::std::string, int64_t> names__arg);

  Schema(Schema&&) = default;

  Schema(const Schema&) = default;

  Schema& operator=(Schema&&) = default;

  Schema& operator=(const Schema&) = default;
  void __clear();
 public:
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> dataTypes;
 public:
  std::unordered_map<::std::string, int64_t> names;

 public:
  struct __isset {
    bool dataTypes;
    bool names;
  } __isset = {};
  bool operator==(const Schema& rhs) const;
  bool operator<(const Schema& rhs) const;
  const std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>& get_dataTypes() const&;
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType> get_dataTypes() &&;

  template <typename T_Schema_dataTypes_struct_setter = std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>
  std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>& set_dataTypes(T_Schema_dataTypes_struct_setter&& dataTypes_) {
    dataTypes = std::forward<T_Schema_dataTypes_struct_setter>(dataTypes_);
    __isset.dataTypes = true;
    return dataTypes;
  }
  const std::unordered_map<::std::string, int64_t>& get_names() const&;
  std::unordered_map<::std::string, int64_t> get_names() &&;

  template <typename T_Schema_names_struct_setter = std::unordered_map<::std::string, int64_t>>
  std::unordered_map<::std::string, int64_t>& set_names(T_Schema_names_struct_setter&& names_) {
    names = std::forward<T_Schema_names_struct_setter>(names_);
    __isset.names = true;
    return names;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Schema >;
};

void swap(Schema& a, Schema& b);

template <class Protocol_>
uint32_t Schema::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::reflection
