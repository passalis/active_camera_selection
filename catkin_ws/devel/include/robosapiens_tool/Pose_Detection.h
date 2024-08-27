// Generated by gencpp from file robosapiens_tool/Pose_Detection.msg
// DO NOT EDIT!


#ifndef ROBOSAPIENS_TOOL_MESSAGE_POSE_DETECTION_H
#define ROBOSAPIENS_TOOL_MESSAGE_POSE_DETECTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robosapiens_tool
{
template <class ContainerAllocator>
struct Pose_Detection_
{
  typedef Pose_Detection_<ContainerAllocator> Type;

  Pose_Detection_()
    : confidence(0.0)
    , detection(0)  {
    }
  Pose_Detection_(const ContainerAllocator& _alloc)
    : confidence(0.0)
    , detection(0)  {
  (void)_alloc;
    }



   typedef float _confidence_type;
  _confidence_type confidence;

   typedef int32_t _detection_type;
  _detection_type detection;





  typedef boost::shared_ptr< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> const> ConstPtr;

}; // struct Pose_Detection_

typedef ::robosapiens_tool::Pose_Detection_<std::allocator<void> > Pose_Detection;

typedef boost::shared_ptr< ::robosapiens_tool::Pose_Detection > Pose_DetectionPtr;
typedef boost::shared_ptr< ::robosapiens_tool::Pose_Detection const> Pose_DetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robosapiens_tool::Pose_Detection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robosapiens_tool::Pose_Detection_<ContainerAllocator1> & lhs, const ::robosapiens_tool::Pose_Detection_<ContainerAllocator2> & rhs)
{
  return lhs.confidence == rhs.confidence &&
    lhs.detection == rhs.detection;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robosapiens_tool::Pose_Detection_<ContainerAllocator1> & lhs, const ::robosapiens_tool::Pose_Detection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robosapiens_tool

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de333b98e0f13b5e641849ba0efa7eda";
  }

  static const char* value(const ::robosapiens_tool::Pose_Detection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde333b98e0f13b5eULL;
  static const uint64_t static_value2 = 0x641849ba0efa7edaULL;
};

template<class ContainerAllocator>
struct DataType< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robosapiens_tool/Pose_Detection";
  }

  static const char* value(const ::robosapiens_tool::Pose_Detection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"float32 confidence\n"
"\n"
"int32 detection\n"
"\n"
;
  }

  static const char* value(const ::robosapiens_tool::Pose_Detection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.confidence);
      stream.next(m.detection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pose_Detection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robosapiens_tool::Pose_Detection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robosapiens_tool::Pose_Detection_<ContainerAllocator>& v)
  {
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "detection: ";
    Printer<int32_t>::stream(s, indent + "  ", v.detection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOSAPIENS_TOOL_MESSAGE_POSE_DETECTION_H