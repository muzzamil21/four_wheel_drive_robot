              /**ROBOT FORWARD MOTION METHOD**/
void robot_fwd(int Bspeed) {
  MotorBL_FWD(Bspeed);
  MotorBR_FWD(Bspeed);
  MotorFL_FWD(Bspeed);
  MotorFR_FWD(Bspeed);
}
             /**ROBOT BACKWARD MOTION METHOD**/
void robot_bkd(int Bspeed) {
  MotorBL_BKD(Bspeed);
  MotorBR_BKD(Bspeed);
  MotorFL_BKD(Bspeed);
  MotorFR_BKD(Bspeed);
}
                  /**ROBOT STOP METHOD**/
void robot_stop() {
  MotorBL_BKD(0);
  MotorBR_BKD(0);
  MotorFL_BKD(0);
  MotorFR_BKD(0);
}
                 /**ROBOT RIGHT MOTION METHOD**/
void robot_right(int BspeedT) {
  MotorBL_FWD(BspeedT);
  MotorFL_FWD(BspeedT);
  MotorFR_BKD(BspeedT);
  MotorBR_BKD(BspeedT);
}
                 /**ROBOT LEFT MOTION METHOD**/
void robot_left(int BspeedT) {
  MotorBL_BKD(BspeedT);
  MotorFL_BKD(BspeedT);
  MotorFR_FWD(BspeedT);
  MotorBR_FWD(BspeedT);
}
