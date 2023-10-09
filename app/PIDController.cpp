/**
 * @file PIDController.cpp
 * @author (Part 1) Sai Teja Gilukara (saitejag@umd.edu) - Driver, Aaqib Barodawala (aakib@umd.edu) - Navigator
 * @brief CPP file for PIDController class
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../include/PIDController.hpp"
#include <stdlib.h>
#include <iostream>
/**
 * @brief Construct a new PIDController::PIDController object
 * 
 */
tddgroup7_pair1::PIDController::PIDController() {
  /**
   * @todo Initialize the Kp, Ki and Kd values
   * 
   */
}

/**
 * @brief Compute the error
 * 
 * @param setPoint 
 * @param currentState 
 * @return double 
 */
double tddgroup7_pair1::PIDController::computeError(double setPoint, double currentState) {
  /**
   * @todo Compute the error using setPoint and currentState 
   * 
   */
  double error = setPoint - currentState;
  double total_feedback = 0.0;
  total_feedback = computeFeedback(error);
  errorVector.push_back(error);
  currentState += total_feedback;
  error = setPoint - currentState;
  return error;
}
/**
 * @brief Compute the feedback
 * 
 * @param error 
 * @return double 
 */
double tddgroup7_pair1::PIDController::computeFeedback(double error) {
  /**
   * @todo Compute the feedback using error
   * 
   */
  double Proportional_error{0};
  double Integral_error{0};
  double Differential_error{0};
  double total_feedback{0};
  Proportional_error = kp*(error);
  // double error = setPoint - currentState;
  if(errorVector.size()>0){
    for(int i=0;i<errorVector.size();i++){
      Integral_error += errorVector[i];
    }
    Differential_error = kd*(error - errorVector[errorVector.size()-1]);
  }
  else{
    Differential_error = 0.0;
  }
  Integral_error += error;
  Integral_error = ki*Integral_error/(errorVector.size()+1);
  total_feedback = Proportional_error + Integral_error + Differential_error;
  return total_feedback;
}
/**
 * @brief Get the Kp object
 * 
 * @return double 
 */
double tddgroup7_pair1::PIDController::getKp() {
  /**
   * @todo Get the Kp value
   * 
   */
  return kp;
}
/**
 * @brief Get the Ki object
 * 
 * @return double 
 */
double tddgroup7_pair1::PIDController::getKi() {
  /**
   * @todo Get the Ki value
   * 
   */
  return ki;
}
/**
 * @brief Get the Kd object
 * 
 * @return double 
 */
double tddgroup7_pair1::PIDController::getKd() {
  /**
   * @todo Get the Kd value
   * 
   */
  return kd;
}
/**
 * @brief Set the Kp object
 * 
 * @param kp 
 */
void tddgroup7_pair1::PIDController::setKp(double Kp) {
  /**
   * @todo Set the Kp value
   * 
   */
  kp = Kp;
}
/**
 * @brief Set the Ki object
 * 
 * @param ki 
 */
void tddgroup7_pair1::PIDController::setKi(double Ki) {
  /**
   * @todo Set the Ki value
   * 
   */
  ki = Ki;
}
/**
 * @brief Set the Kd object
 * 
 * @param kd 
 */
void tddgroup7_pair1::PIDController::setKd(double Kd) {
  /**
   * @todo Set the Kd value
   * 
   */
  kd = Kd;
}