// Generated by gencpp from file niryo_one_msgs/SetDigitalIO.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SETDIGITALIO_H
#define NIRYO_ONE_MSGS_MESSAGE_SETDIGITALIO_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/SetDigitalIORequest.h>
#include <niryo_one_msgs/SetDigitalIOResponse.h>


namespace niryo_one_msgs
{

struct SetDigitalIO
{

typedef SetDigitalIORequest Request;
typedef SetDigitalIOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetDigitalIO
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::SetDigitalIO > {
  static const char* value()
  {
    return "58756075ba59c34125d6331e8a8727d4";
  }

  static const char* value(const ::niryo_one_msgs::SetDigitalIO&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::SetDigitalIO > {
  static const char* value()
  {
    return "niryo_one_msgs/SetDigitalIO";
  }

  static const char* value(const ::niryo_one_msgs::SetDigitalIO&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::SetDigitalIORequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetDigitalIO >
template<>
struct MD5Sum< ::niryo_one_msgs::SetDigitalIORequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetDigitalIO >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetDigitalIORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetDigitalIORequest> should match
// service_traits::DataType< ::niryo_one_msgs::SetDigitalIO >
template<>
struct DataType< ::niryo_one_msgs::SetDigitalIORequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetDigitalIO >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetDigitalIORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::SetDigitalIOResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetDigitalIO >
template<>
struct MD5Sum< ::niryo_one_msgs::SetDigitalIOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetDigitalIO >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetDigitalIOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetDigitalIOResponse> should match
// service_traits::DataType< ::niryo_one_msgs::SetDigitalIO >
template<>
struct DataType< ::niryo_one_msgs::SetDigitalIOResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetDigitalIO >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetDigitalIOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SETDIGITALIO_H
