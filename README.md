# MaRS-Task-2

Problem Statement: Control a two wheel drive mechanism using w, a s, d keys.

First, i knew i how to use the serial monitor by learning from previous tasks. Now i had to think of a way to turn wheels left and right. Then i had the idea of stopping or reducing the speed of one of the wheels which can lead to turning left or right.
Then i had to think of components and obviously i had to choose two hobby gearmotors, arduino , breadboard. Now to reverse the polarity of voltage to make the wheels turn in reverse, i needed a mechanism. Then, i found the h bridge motor driver.

H-bridge mechanism: In the circuit, for the left motor, When IN1 is HIGH and IN2 is LOW the motor moves forward. When IN1 is LOW and IN2 is HIGH the motor moves Backward. When both are LOW it stops.

Then I connected used output pins 1 and 2 for motor1 and output pins 3 and 4 for motor 2.
The code reads characters from the Serial monitor, compares them with W, A, S, D and T and executes the function accordingly. I used 'T' to stop both the motors. The enable pins were used to control the speed of the motor.

Other than that I just had to debug the correct combination of HIGH and LOW signals to the motor.
