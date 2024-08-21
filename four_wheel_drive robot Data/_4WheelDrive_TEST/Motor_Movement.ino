/*
Motor_Movement has all the functions for controlling the motor
*/
                /******DEFINING METHODS FOR MOTORS MOTION******/

                /**BACKWARD LEFT MOTOR FORWARD MOTION METHOD**/
void MotorBL_FWD(int BASE_SPEED) {
  digitalWrite(MOTORBL_PINF, HIGH);
  digitalWrite(MOTORBL_PINB, LOW);
  analogWrite(MOTORBL_PINPWM, BASE_SPEED);
}
                /**BACKWARD LEFT MOTOR BACKWARD MOTION METHOD**/
void MotorBL_BKD(int BASE_SPEED) {
  digitalWrite(MOTORBL_PINF, LOW);
  digitalWrite(MOTORBL_PINB, HIGH);
  analogWrite(MOTORBL_PINPWM, BASE_SPEED);
}
                 /**BACKWARD RIGHT MOTOR FORWARD MOTION METHOD**/
void MotorBR_FWD(int BASE_SPEED) {
  digitalWrite(MOTORBR_PINF, HIGH);
  digitalWrite(MOTORBR_PINB, LOW);
  analogWrite(MOTORBR_PINPWM, BASE_SPEED);
}
                /**BACKWARD RIGHT MOTOR BACKWARD MOTION METHOD**/
void MotorBR_BKD(int BASE_SPEED) {
  digitalWrite(MOTORBR_PINF, LOW);
  digitalWrite(MOTORBR_PINB, HIGH);
  analogWrite(MOTORBR_PINPWM, BASE_SPEED);
}
                /**FORWARD LEFT MOTOR FORWARD MOTION METHOD**/
void MotorFL_FWD(int BASE_SPEED) {
  digitalWrite(MOTORFL_PINF, HIGH);
  digitalWrite(MOTORFL_PINB, LOW);
  analogWrite(MOTORFL_PINPWM, BASE_SPEED);
}
               /**FORWARD LEFT MOTOR BACKWARD MOTION METHOD**/
void MotorFL_BKD(int BASE_SPEED) {
  digitalWrite(MOTORFL_PINF, LOW);
  digitalWrite(MOTORFL_PINB, HIGH);
  analogWrite(MOTORFL_PINPWM, BASE_SPEED);
}
              /**FORWARD RIGHT MOTOR FORWARD MOTION METHOD**/
void MotorFR_FWD(int BASE_SPEED) {
  digitalWrite(MOTORFR_PINF, HIGH);
  digitalWrite(MOTORFR_PINB, LOW);
  analogWrite(MOTORFR_PINPWM, BASE_SPEED);
}
              /**FORWARD RIGHT MOTOR BACKWARD MOTION METHOD**/
void MotorFR_BKD(int BASE_SPEED) {
  digitalWrite(MOTORFR_PINF, LOW);
  digitalWrite(MOTORFR_PINB, HIGH);
  analogWrite(MOTORFR_PINPWM, BASE_SPEED);
}
