/**
 * @file PIDController.hpp
 * @author Sai Teja Gilukara (saitejag@umd.edu) (Driver) , Aaqib Barodawala (abarodaw@umd.edu)(Navigator)
 * @brief Class file for PID Controller
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <vector>


/**
 * @brief PIDController class
 * 
 */
namespace tddgroup7_pair1 {
class PIDController {
  public:
  /**
   * @brief Construct a new PIDController object
   * 
   */
  PIDController();
  
  /**
   * @brief Compute the error
   * 
   * @param setPoint 
   * @param currentState 
   * @return double 
   */
  double computeError(double setPoint, double currentState);
  /**
   * @brief Compute the feedback
   * 
   * @param error 
   * @return double 
   */
  double computeFeedback(double error);
  /**
   * @brief Set the Kp object
   * 
   * @param kp 
   */
  double getKp();
  /**
   * @brief Get the Ki object
   * 
   * @return double 
   */
  double getKi();
  /**
   * @brief Get the Kd object
   * 
   * @return double 
   */
  double getKd();
  /**
   * @brief Set the Kp object
   * 
   * @param kp 
   */
  void setKp(double kp);
  /**
   * @brief Set the Ki object
   * 
   * @param ki 
   */
  void setKi(double ki);
  /**
   * @brief Set the Kd object
   * 
   * @param kd 
   */
  void setKd(double kd);
private:
  double kp;
  double ki;
  double kd;
  double error;
  double feedback;
  std::vector<double> errorVector;
};
}  // namespace tddgroup7_pair1
#endif  // INCLUDE_PIDCONTROLLER_HPP_