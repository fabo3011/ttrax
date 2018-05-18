// Generated by gencpp from file base_local_planner/Position2DInt.msg
// DO NOT EDIT!


#ifndef BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H
#define BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace base_local_planner
{
template <class ContainerAllocator>
struct Position2DInt_
{
  typedef Position2DInt_<ContainerAllocator> Type;

  Position2DInt_()
    : x(0)
    , y(0)  {
    }
  Position2DInt_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)  {
  (void)_alloc;
    }



   typedef int64_t _x_type;
  _x_type x;

   typedef int64_t _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::base_local_planner::Position2DInt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::base_local_planner::Position2DInt_<ContainerAllocator> const> ConstPtr;

}; // struct Position2DInt_

typedef ::base_local_planner::Position2DInt_<std::allocator<void> > Position2DInt;

typedef boost::shared_ptr< ::base_local_planner::Position2DInt > Position2DIntPtr;
typedef boost::shared_ptr< ::base_local_planner::Position2DInt const> Position2DIntConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::base_local_planner::Position2DInt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::base_local_planner::Position2DInt_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace base_local_planner

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'base_local_planner': ['/home/fgg/catkin_ws/src/navigation/base_local_planner/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::base_local_planner::Position2DInt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::base_local_planner::Position2DInt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::base_local_planner::Position2DInt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::base_local_planner::Position2DInt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::base_local_planner::Position2DInt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::base_local_planner::Position2DInt_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b834ede922a0fff22c43585c533b49f";
  }

  static const char* value(const ::base_local_planner::Position2DInt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b834ede922a0fffULL;
  static const uint64_t static_value2 = 0x22c43585c533b49fULL;
};

template<class ContainerAllocator>
struct DataType< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "base_local_planner/Position2DInt";
  }

  static const char* value(const ::base_local_planner::Position2DInt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 x\n\
int64 y\n\
";
  }

  static const char* value(const ::base_local_planner::Position2DInt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::base_local_planner::Position2DInt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Position2DInt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::base_local_planner::Position2DInt_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H
