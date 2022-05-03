// Generated by gencpp from file test_pkg/mymessage.msg
// DO NOT EDIT!


#ifndef TEST_PKG_MESSAGE_MYMESSAGE_H
#define TEST_PKG_MESSAGE_MYMESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_pkg
{
template <class ContainerAllocator>
struct mymessage_
{
  typedef mymessage_<ContainerAllocator> Type;

  mymessage_()
    : id(0)
    , name()
    , temperature(0.0)
    , humidity(0.0)  {
    }
  mymessage_(const ContainerAllocator& _alloc)
    : id(0)
    , name(_alloc)
    , temperature(0.0)
    , humidity(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef float _humidity_type;
  _humidity_type humidity;





  typedef boost::shared_ptr< ::test_pkg::mymessage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_pkg::mymessage_<ContainerAllocator> const> ConstPtr;

}; // struct mymessage_

typedef ::test_pkg::mymessage_<std::allocator<void> > mymessage;

typedef boost::shared_ptr< ::test_pkg::mymessage > mymessagePtr;
typedef boost::shared_ptr< ::test_pkg::mymessage const> mymessageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_pkg::mymessage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_pkg::mymessage_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_pkg::mymessage_<ContainerAllocator1> & lhs, const ::test_pkg::mymessage_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.name == rhs.name &&
    lhs.temperature == rhs.temperature &&
    lhs.humidity == rhs.humidity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_pkg::mymessage_<ContainerAllocator1> & lhs, const ::test_pkg::mymessage_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_pkg::mymessage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_pkg::mymessage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_pkg::mymessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_pkg::mymessage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_pkg::mymessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_pkg::mymessage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_pkg::mymessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "16767b4b63fd3551b69c6c06672a0bf6";
  }

  static const char* value(const ::test_pkg::mymessage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x16767b4b63fd3551ULL;
  static const uint64_t static_value2 = 0xb69c6c06672a0bf6ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_pkg::mymessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_pkg/mymessage";
  }

  static const char* value(const ::test_pkg::mymessage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_pkg::mymessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int32 id \n"
"string name \n"
"float32 temperature \n"
"float32 humidity\n"
;
  }

  static const char* value(const ::test_pkg::mymessage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_pkg::mymessage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.temperature);
      stream.next(m.humidity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mymessage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_pkg::mymessage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_pkg::mymessage_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "humidity: ";
    Printer<float>::stream(s, indent + "  ", v.humidity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_PKG_MESSAGE_MYMESSAGE_H
