
#include <Servo.h> 
 
Servo rightChest;  // create servo object to control a servo 
Servo rightShoulder;                // a maximum of eight servo objects can be created 
Servo rightElbow;
 
Servo leftChest;  // create servo object to control a servo 
Servo leftShoulder;                // a maximum of eight servo objects can be created 
Servo leftElbow;

int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  rightShoulder.attach(2);  // attaches the servo on pin 9 to the servo object 
  rightChest.attach(3);
  rightElbow.attach(4);
  
  leftShoulder.attach(8);  // attaches the servo on pin 9 to the servo object 
  leftChest.attach(9);
  leftElbow.attach(10);

} 
 
 
void loop() 
{ 
      leftShoulder.write(180); 
//  reset();
 // Right_Arm_Flex();
 // Left_Arm_Flex();
}
void reset(){
                               // in steps of 1 degree 
    rightShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    rightChest.write(pos);
    rightElbow.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
                                   // in steps of 1 degree 
    leftShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    leftChest.write(pos);
    leftElbow.write(pos);
    delay(15);  

}
