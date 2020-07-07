#include "ros/ros.h"
#include "tutorial_pkg/rtcm_msgs.h"
#include "iostream"


void msgCallback(const tutorial_pkg::rtcm_msgs::ConstPtr& msg)
{
    ROS_INFO("receive msg= %d",msg -> data);

}


int main(int argc, char **argv)
{
    int a;
    int b;
ros::init(argc, argv, "tutorial_publihser");
ros::NodeHandle nh;
ros::Publisher tutorial_pub=nh.advertise<tutorial_pkg::rtcm_msgs>("tutorial_msg",100);

ros::Subscriber tutorial_sub=nh.subscribe("tutorial_msg",100,msgCallback);

tutorial_pkg::rtcm_msgs msg;

return 0;
}
  
