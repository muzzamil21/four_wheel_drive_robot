/*
Code for four wheel drive robot based on Arduino Mega 2560 and L298 motor driver, 
Consult attached fritzing schematic for pin assignment/refernce. 
Change the base speed and delays as per your requirement. 
There is a chance that right or left may be swapped as per your connections
Code and Schematic by: muzzamil21
*/

#define MOTORBL_PINB  47  //IN3
#define MOTORBL_PINF  49  //IN4
#define MOTORBL_PINPWM  9 //ENB

#define MOTORBR_PINF  43  //IN1
#define MOTORBR_PINB  45  //IN2
#define MOTORBR_PINPWM  8 //ENA

#define MOTORFL_PINF  31 //IN1
#define MOTORFL_PINB  33  //IN2
#define MOTORFL_PINPWM  3 //ENA

#define MOTORFR_PINB  35 //IN3
#define MOTORFR_PINF  37  //IN4
#define MOTORFR_PINPWM  2 //ENB

int base_speed = 175;   //value range is 0-255


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

robot_fwd(base_speed);    //moving forward the robot for 1 second
delay(1000);
robot_stop();             //stoppping the robot for 1 second
delay(1000);
robot_right(base_speed);    //turning the robot to right side
delay(100);
robot_stop();           //stoppping the robot for 1 second
delay(1000);
robot_bkd(base_speed);    //moving backward the robot for 1 second
delay(1000);
robot_stop();         //stoppping the robot for 1 second
delay(1000);
robot_left(base_speed);   //turning the robot to left side
delay(100);
robot_fwd(base_speed);    //moving forward the robot for 1 second
delay(1000);
robot_stop();           //stoppping the robot for 5 second
delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

}




