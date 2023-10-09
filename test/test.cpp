/**
 * @file test.cpp
 * @author Sai Teja Giluara (saitejag@umd.edu) - Driver, Aaqib Barodawala (aakib@umd.edu) - Navigator
 * @brief 
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include "../include/PIDController.hpp"

/**
 * @brief Test with only Proportional gain setting Integral and Differential gain to zero 
 * 
 */
TEST(PIDControllerTest, testProportionalGain) {
  tddgroup7_pair1::PIDController pid;
  pid.setKp(0.5);
  pid.setKi(0);
  pid.setKd(0);
  EXPECT_EQ(0.5, pid.getKp());
  EXPECT_EQ(0, pid.getKi());
  EXPECT_EQ(0, pid.getKd());
  EXPECT_NEAR(0.5, pid.computeFeedback(1), 0.0001);
  EXPECT_NEAR(1, pid.computeFeedback(2), 0.0001);
  EXPECT_NEAR(1.5, pid.computeFeedback(3), 0.0001);
}

/**
 * @brief Test computeError function 
 * 
 */
TEST(PIDControllerTest, testComputeError) {
  tddgroup7_pair1::PIDController pid;
  EXPECT_NEAR(0, pid.computeError(1, 1), 0.1);
  EXPECT_NEAR(1, pid.computeError(2, 1), 0.1);
  EXPECT_NEAR(-2, pid.computeError(1, 3), 0.1);
}

/**
 * @brief Test Proportional and Integral gain setting Differential gain to zero 
 * 
 */
TEST(PIDControllerTest, testProportionalIntegralGain) {
  tddgroup7_pair1::PIDController pid;
  pid.setKp(0.5);
  pid.setKi(0.5);
  pid.setKd(0);
  EXPECT_EQ(0.5, pid.getKp());
  EXPECT_EQ(0.5, pid.getKi());
  EXPECT_EQ(0, pid.getKd());
  EXPECT_NEAR(1, pid.computeFeedback(1), 0.1);
}
