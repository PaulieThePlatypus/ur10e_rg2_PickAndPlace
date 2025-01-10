// Generated by gencpp from file moveit_msgs/CollisionObject.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_COLLISIONOBJECT_H
#define MOVEIT_MSGS_MESSAGE_COLLISIONOBJECT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <object_recognition_msgs/ObjectType.h>
#include <shape_msgs/SolidPrimitive.h>
#include <geometry_msgs/Pose.h>
#include <shape_msgs/Mesh.h>
#include <geometry_msgs/Pose.h>
#include <shape_msgs/Plane.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct CollisionObject_
{
  typedef CollisionObject_<ContainerAllocator> Type;

  CollisionObject_()
    : header()
    , pose()
    , id()
    , type()
    , primitives()
    , primitive_poses()
    , meshes()
    , mesh_poses()
    , planes()
    , plane_poses()
    , subframe_names()
    , subframe_poses()
    , operation(0)  {
    }
  CollisionObject_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , id(_alloc)
    , type(_alloc)
    , primitives(_alloc)
    , primitive_poses(_alloc)
    , meshes(_alloc)
    , mesh_poses(_alloc)
    , planes(_alloc)
    , plane_poses(_alloc)
    , subframe_names(_alloc)
    , subframe_poses(_alloc)
    , operation(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef  ::object_recognition_msgs::ObjectType_<ContainerAllocator>  _type_type;
  _type_type type;

   typedef std::vector< ::shape_msgs::SolidPrimitive_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >> _primitives_type;
  _primitives_type primitives;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _primitive_poses_type;
  _primitive_poses_type primitive_poses;

   typedef std::vector< ::shape_msgs::Mesh_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::shape_msgs::Mesh_<ContainerAllocator> >> _meshes_type;
  _meshes_type meshes;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _mesh_poses_type;
  _mesh_poses_type mesh_poses;

   typedef std::vector< ::shape_msgs::Plane_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::shape_msgs::Plane_<ContainerAllocator> >> _planes_type;
  _planes_type planes;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _plane_poses_type;
  _plane_poses_type plane_poses;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _subframe_names_type;
  _subframe_names_type subframe_names;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _subframe_poses_type;
  _subframe_poses_type subframe_poses;

   typedef int8_t _operation_type;
  _operation_type operation;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ADD)
  #undef ADD
#endif
#if defined(_WIN32) && defined(REMOVE)
  #undef REMOVE
#endif
#if defined(_WIN32) && defined(APPEND)
  #undef APPEND
#endif
#if defined(_WIN32) && defined(MOVE)
  #undef MOVE
#endif

  enum {
    ADD = 0,
    REMOVE = 1,
    APPEND = 2,
    MOVE = 3,
  };


  typedef boost::shared_ptr< ::moveit_msgs::CollisionObject_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::CollisionObject_<ContainerAllocator> const> ConstPtr;

}; // struct CollisionObject_

typedef ::moveit_msgs::CollisionObject_<std::allocator<void> > CollisionObject;

typedef boost::shared_ptr< ::moveit_msgs::CollisionObject > CollisionObjectPtr;
typedef boost::shared_ptr< ::moveit_msgs::CollisionObject const> CollisionObjectConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::CollisionObject_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::CollisionObject_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_msgs::CollisionObject_<ContainerAllocator1> & lhs, const ::moveit_msgs::CollisionObject_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pose == rhs.pose &&
    lhs.id == rhs.id &&
    lhs.type == rhs.type &&
    lhs.primitives == rhs.primitives &&
    lhs.primitive_poses == rhs.primitive_poses &&
    lhs.meshes == rhs.meshes &&
    lhs.mesh_poses == rhs.mesh_poses &&
    lhs.planes == rhs.planes &&
    lhs.plane_poses == rhs.plane_poses &&
    lhs.subframe_names == rhs.subframe_names &&
    lhs.subframe_poses == rhs.subframe_poses &&
    lhs.operation == rhs.operation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_msgs::CollisionObject_<ContainerAllocator1> & lhs, const ::moveit_msgs::CollisionObject_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CollisionObject_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CollisionObject_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CollisionObject_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbba710596087da521c07564160dfccb";
  }

  static const char* value(const ::moveit_msgs::CollisionObject_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdbba710596087da5ULL;
  static const uint64_t static_value2 = 0x21c07564160dfccbULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/CollisionObject";
  }

  static const char* value(const ::moveit_msgs::CollisionObject_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A header, used for interpreting the poses\n"
"Header header\n"
"\n"
"# DISCLAIMER: This field is not in use yet and all other poses\n"
"# are still interpreted in the header frame.\n"
"# https://github.com/ros-planning/moveit/pull/2037\n"
"# implements the actual logic for this field.\n"
"# ---\n"
"# The object's pose relative to the header frame.\n"
"# The shapes and subframe poses are defined relative to this pose.\n"
"geometry_msgs/Pose pose\n"
"\n"
"# The id of the object (name used in MoveIt)\n"
"string id\n"
"\n"
"# The object type in a database of known objects\n"
"object_recognition_msgs/ObjectType type\n"
"\n"
"# The collision geometries associated with the object.\n"
"# Their poses are with respect to the object's pose\n"
"\n"
"# Solid geometric primitives\n"
"shape_msgs/SolidPrimitive[] primitives\n"
"geometry_msgs/Pose[] primitive_poses\n"
"\n"
"# Meshes\n"
"shape_msgs/Mesh[] meshes\n"
"geometry_msgs/Pose[] mesh_poses\n"
"\n"
"# Bounding planes (equation is specified, but the plane can be oriented using an additional pose)\n"
"shape_msgs/Plane[] planes\n"
"geometry_msgs/Pose[] plane_poses\n"
"\n"
"# Named subframes on the object. Use these to define points of interest on the object that you want\n"
"# to plan with (e.g. \"tip\", \"spout\", \"handle\"). The id of the object will be prepended to the subframe.\n"
"# If an object with the id \"screwdriver\" and a subframe \"tip\" is in the scene, you can use the frame\n"
"# \"screwdriver/tip\" for planning.\n"
"# The length of the subframe_names and subframe_poses has to be identical.\n"
"string[] subframe_names\n"
"geometry_msgs/Pose[] subframe_poses\n"
"\n"
"# Adds the object to the planning scene. If the object previously existed, it is replaced.\n"
"byte ADD=0\n"
"\n"
"# Removes the object from the environment entirely (everything that matches the specified id)\n"
"byte REMOVE=1\n"
"\n"
"# Append to an object that already exists in the planning scene. If the object does not exist, it is added.\n"
"byte APPEND=2\n"
"\n"
"# If an object already exists in the scene, new poses can be sent (the geometry arrays must be left empty)\n"
"# if solely moving the object is desired\n"
"byte MOVE=3\n"
"\n"
"# Operation to be performed\n"
"byte operation\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: object_recognition_msgs/ObjectType\n"
"################################################## OBJECT ID #########################################################\n"
"\n"
"# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n"
"# object\n"
"\n"
"# The key of the found object: the unique identifier in the given db\n"
"string key\n"
"\n"
"# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n"
"# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n"
"# There is no conventional format for those parameters and it's nice to keep that flexibility.\n"
"# The object_recognition_core as a generic DB type that can read those fields\n"
"# Current examples:\n"
"# For CouchDB:\n"
"#   type: 'CouchDB'\n"
"#   root: 'http://localhost:5984'\n"
"#   collection: 'object_recognition'\n"
"# For SQL household database:\n"
"#   type: 'SqlHousehold'\n"
"#   host: 'wgs36'\n"
"#   port: 5432\n"
"#   user: 'willow'\n"
"#   password: 'willow'\n"
"#   name: 'household_objects'\n"
"#   module: 'tabletop'\n"
"string db\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/SolidPrimitive\n"
"# Define box, sphere, cylinder, cone \n"
"# All shapes are defined to have their bounding boxes centered around 0,0,0.\n"
"\n"
"uint8 BOX=1\n"
"uint8 SPHERE=2\n"
"uint8 CYLINDER=3\n"
"uint8 CONE=4\n"
"\n"
"# The type of the shape\n"
"uint8 type\n"
"\n"
"\n"
"# The dimensions of the shape\n"
"float64[] dimensions\n"
"\n"
"# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n"
"\n"
"# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n"
"# sides of the box.\n"
"uint8 BOX_X=0\n"
"uint8 BOX_Y=1\n"
"uint8 BOX_Z=2\n"
"\n"
"\n"
"# For the SPHERE type, only one component is used, and it gives the radius of\n"
"# the sphere.\n"
"uint8 SPHERE_RADIUS=0\n"
"\n"
"\n"
"# For the CYLINDER and CONE types, the center line is oriented along\n"
"# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n"
"# of dimensions gives the height of the cylinder (cone).  The\n"
"# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n"
"# radius of the base of the cylinder (cone).  Cone and cylinder\n"
"# primitives are defined to be circular. The tip of the cone is\n"
"# pointing up, along +Z axis.\n"
"\n"
"uint8 CYLINDER_HEIGHT=0\n"
"uint8 CYLINDER_RADIUS=1\n"
"\n"
"uint8 CONE_HEIGHT=0\n"
"uint8 CONE_RADIUS=1\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/Mesh\n"
"# Definition of a mesh\n"
"\n"
"# list of triangles; the index values refer to positions in vertices[]\n"
"MeshTriangle[] triangles\n"
"\n"
"# the actual vertices that make up the mesh\n"
"geometry_msgs/Point[] vertices\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/MeshTriangle\n"
"# Definition of a triangle's vertices\n"
"uint32[3] vertex_indices\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/Plane\n"
"# Representation of a plane, using the plane equation ax + by + cz + d = 0\n"
"\n"
"# a := coef[0]\n"
"# b := coef[1]\n"
"# c := coef[2]\n"
"# d := coef[3]\n"
"\n"
"float64[4] coef\n"
;
  }

  static const char* value(const ::moveit_msgs::CollisionObject_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.primitives);
      stream.next(m.primitive_poses);
      stream.next(m.meshes);
      stream.next(m.mesh_poses);
      stream.next(m.planes);
      stream.next(m.plane_poses);
      stream.next(m.subframe_names);
      stream.next(m.subframe_poses);
      stream.next(m.operation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CollisionObject_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::CollisionObject_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::CollisionObject_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    s << std::endl;
    Printer< ::object_recognition_msgs::ObjectType_<ContainerAllocator> >::stream(s, indent + "  ", v.type);
    s << indent << "primitives[]" << std::endl;
    for (size_t i = 0; i < v.primitives.size(); ++i)
    {
      s << indent << "  primitives[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >::stream(s, indent + "    ", v.primitives[i]);
    }
    s << indent << "primitive_poses[]" << std::endl;
    for (size_t i = 0; i < v.primitive_poses.size(); ++i)
    {
      s << indent << "  primitive_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.primitive_poses[i]);
    }
    s << indent << "meshes[]" << std::endl;
    for (size_t i = 0; i < v.meshes.size(); ++i)
    {
      s << indent << "  meshes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::Mesh_<ContainerAllocator> >::stream(s, indent + "    ", v.meshes[i]);
    }
    s << indent << "mesh_poses[]" << std::endl;
    for (size_t i = 0; i < v.mesh_poses.size(); ++i)
    {
      s << indent << "  mesh_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.mesh_poses[i]);
    }
    s << indent << "planes[]" << std::endl;
    for (size_t i = 0; i < v.planes.size(); ++i)
    {
      s << indent << "  planes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::Plane_<ContainerAllocator> >::stream(s, indent + "    ", v.planes[i]);
    }
    s << indent << "plane_poses[]" << std::endl;
    for (size_t i = 0; i < v.plane_poses.size(); ++i)
    {
      s << indent << "  plane_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.plane_poses[i]);
    }
    s << indent << "subframe_names[]" << std::endl;
    for (size_t i = 0; i < v.subframe_names.size(); ++i)
    {
      s << indent << "  subframe_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.subframe_names[i]);
    }
    s << indent << "subframe_poses[]" << std::endl;
    for (size_t i = 0; i < v.subframe_poses.size(); ++i)
    {
      s << indent << "  subframe_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.subframe_poses[i]);
    }
    s << indent << "operation: ";
    Printer<int8_t>::stream(s, indent + "  ", v.operation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_COLLISIONOBJECT_H
