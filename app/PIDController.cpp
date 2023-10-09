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
  return 0;
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
  return 0;
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
  return 0;
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
  return 0;
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
  return 0;
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
}

