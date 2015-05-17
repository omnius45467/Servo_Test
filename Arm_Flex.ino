void Right_Arm_Flex() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    rightShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    rightChest.write(pos);
    rightElbow.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    rightShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    rightChest.write(pos);
    rightElbow.write(pos);            // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}
void Left_Arm_Flex() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    leftShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    leftChest.write(pos);
    leftElbow.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    leftShoulder.write(pos);              // tell servo to go to position in variable 'pos' 
    leftChest.write(pos);
    leftElbow.write(pos);            // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}
