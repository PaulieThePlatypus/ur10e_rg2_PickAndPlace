// Generated by gencpp from file niryo_one_msgs/ManageSequenceResponse.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_MANAGESEQUENCERESPONSE_H
#define NIRYO_ONE_MSGS_MESSAGE_MANAGESEQUENCERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <niryo_one_msgs/Sequence.h>

namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct ManageSequenceResponse_
{
  typedef ManageSequenceResponse_<ContainerAllocator> Type;

  ManageSequenceResponse_()
    : status(0)
    , message()
    , sequence()  {
    }
  ManageSequenceResponse_(const ContainerAllocator& _alloc)
    : status(0)
    , message(_alloc)
    , sequence(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;

   typedef  ::niryo_one_msgs::Sequence_<ContainerAllocator>  _sequence_type;
  _sequence_type sequence;





  typedef boost::shared_ptr< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ManageSequenceResponse_

typedef ::niryo_one_msgs::ManageSequenceResponse_<std::allocator<void> > ManageSequenceResponse;

typedef boost::shared_ptr< ::niryo_one_msgs::ManageSequenceResponse > ManageSequenceResponsePtr;
typedef boost::shared_ptr< ::niryo_one_msgs::ManageSequenceResponse const> ManageSequenceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.message == rhs.message &&
    lhs.sequence == rhs.sequence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aaa53fce535ae8c2e063d1fd74a644da";
  }

  static const char* value(const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaaa53fce535ae8c2ULL;
  static const uint64_t static_value2 = 0xe063d1fd74a644daULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/ManageSequenceResponse";
  }

  static const char* value(const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n"
"string message\n"
"\n"
"niryo_one_msgs/Sequence sequence\n"
"\n"
"\n"
"================================================================================\n"
"MSG: niryo_one_msgs/Sequence\n"
"int32 id\n"
"string name\n"
"string description\n"
"\n"
"int32 created\n"
"int32 updated\n"
"\n"
"string blockly_xml\n"
"string python_code\n"
;
  }

  static const char* value(const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.message);
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManageSequenceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::ManageSequenceResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
    s << indent << "sequence: ";
    s << std::endl;
    Printer< ::niryo_one_msgs::Sequence_<ContainerAllocator> >::stream(s, indent + "  ", v.sequence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_MANAGESEQUENCERESPONSE_H
