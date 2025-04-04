
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Vector3

class FlowVelocityPublisher(Node):
    def __init__(self):
        super().__init__('flow_velocity_publisher')
        self.publisher_ = self.create_publisher(Vector3, 'hydrodynamics/current_velocity', 10)
        timer_period = 0.1  # seconds (10 Hz)
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Vector3()
        msg.x = 0.1  # example velocity in x direction (m/s)
        msg.y = 0.0  # example velocity in y direction (m/s)
        msg.z = 0.0  # example velocity in z direction (m/s)
        self.publisher_.publish(msg)
        self.get_logger().info(f"Publishing flow velocity: {msg}")

def main(args=None):
    rclpy.init(args=args)
    node = FlowVelocityPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
