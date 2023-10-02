/***************************************************************
   Motor driver function definitions
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
 #define RIGHT_MOTOR_BACKWARD 5
 #define LEFT_MOTOR_BACKWARD  6
 #define RIGHT_MOTOR_FORWARD  9
 #define LEFT_MOTOR_FORWARD   10
 #define RIGHT_MOTOR_ENABLE 12
 #define LEFT_MOTOR_ENABLE 13
  
#elif defined ROBOCLAW_2x30A
  #define LEFT_MOTOR 3
  #define RIGHT_MOTOR 5
  #define FULL_FORWARD 1250
  #define FULL_BACKWARD 1750

#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
