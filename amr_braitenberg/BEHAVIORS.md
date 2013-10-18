Braitenberg Behaviors
================================

Agent Types
-------------------------
* TYPE_A: This type couples each motor or wheel with the sonar directly placed on the same size of the robot. Therefore, when the left sonar
	  detects an obstacle, the left wheel will increase its speed, making the robot move to the right, and vice versa. 
* TYPE_B: This type couples the wheels in an inverse way, the left sonar with the right wheel and vice versa. Therefore, when the left sonar
    	  detects an obstacle, the right wheel will increase its speed, making the robot move to the left (towards the obstacle), and 
          eventually crashing.
* TYPE_C: This type couples each wheel with both sonars. This means that the reading of both left and right sensors will affect each individual
          wheel. But in either case, each will depends of a different factor, this is the reason, that depending of the choice of combination
          of this factors, this behavior can present variations, such as a zig zag movement.

Remarks
-------------------------
* The behavior of each wheel is described as the product of a sonar reading and certain factor (1 or 2). As the speed is directly proportional
  to this factor, if the factor is negative, the speed will be negative, and the agent might be able to move backwards.

* The ranges of the sonar readings go from 0 to 4, where 4 means that no object is detected, and 0 means that the sensor is hitting an object.
  As we are directly passing the reading to the wheel or motor, if it reads 4, a 4 goes to speed, meaning that the agent can move faster,
  because there's still a lot of free space, as the readings go lower, the robot should move slower.
