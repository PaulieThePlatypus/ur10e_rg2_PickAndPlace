// Generated by gencpp from file niryo_one_msgs/JoystickJointsFeedback.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_JOYSTICKJOINTSFEEDBACK_H
#define NIRYO_ONE_MSGS_MESSAGE_JOYSTICKJOINTSFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct JoystickJointsFeedback_
{
  typedef JoystickJointsFeedback_<ContainerAllocator> Type;

  JoystickJointsFeedback_()
    : is_in_joints_limit(false)  {
    }
  JoystickJointsFeedback_(const ContainerAllocator& _alloc)
    : is_in_joints_limit(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_in_joints_limit_type;
  _is_in_joints_limit_type is_in_joints_limit;





  typedef boost::shared_ptr< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct JoystickJointsFeedback_

typedef ::niryo_one_msgs::JoystickJointsFeedback_<std::allocator<void> > JoystickJointsFeedback;

typedef boost::shared_ptr< ::niryo_one_msgs::JoystickJointsFeedback > JoystickJointsFeedbackPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::JoystickJointsFeedback const> JoystickJointsFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.is_in_joints_limit == rhs.is_in_joints_limit;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef8713044a4f11ece629bb8e0a3e2058";
  }

  static const char* value(const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef8713044a4f11ecULL;
  static const uint64_t static_value2 = 0xe629bb8e0a3e2058ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/JoystickJointsFeedback";
  }

  static const char* value(const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# feedback \n"
"bool is_in_joints_limit\n"
"\n"
;
  }

  static const char* value(const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_in_joints_limit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JoystickJointsFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::JoystickJointsFeedback_<ContainerAllocator>& v)
  {
    s << indent << "is_in_joints_limit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_in_joints_limit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_JOYSTICKJOINTSFEEDBACK_H
