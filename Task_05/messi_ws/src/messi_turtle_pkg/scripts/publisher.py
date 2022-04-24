#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import String

def talker():
    # Topic must have the same NAME + Type
    pub = rospy.Publisher('chatter', String, queue_size=10)

    rospy.init_node('talker', anonymous=True)

    rate = rospy.Rate(1) #10hz
    while not rospy.is_shutdown():
        hello_str = f"Hello world {rospy.get_time()}"
        rospy.loginfo(hello_str)
        pub.publish(hello_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass