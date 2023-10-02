/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

//#ifdef L298_MOTOR_DRIVER
//  #define RIGHT_MOTOR_BACKWARD 5
//  #define LEFT_MOTOR_BACKWARD  6
//  #define RIGHT_MOTOR_FORWARD  9
//  #define LEFT_MOTOR_FORWARD   10
//  #define RIGHT_MOTOR_ENABLE 12
//  #define LEFT_MOTOR_ENABLE 13
//
//  void initMotorController();
//  void setMotorSpeed(int i, int spd);
//  void setMotorSpeeds(int leftSpeed, int rightSpeed);
  
#ifdef ROBOCLAW_2x30A
  #define LEFT_MOTOR 3
  #define RIGHT_MOTOR 5
  #define FULL_FOWARD 1250
  #define STOPPED 1500
  #define FULL_BACKWARD 1750

  void initMotorController();
  void setMotorSpeeds(long leftSpeed, long rightSpeed);
#endif
