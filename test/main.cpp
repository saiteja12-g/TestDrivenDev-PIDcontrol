/**
 * @file main.cpp
 * @author Sai Teja Giluara (saitejag@umd.edu) - Driver, Aaqib Barodawala (aakib@umd.edu) - Navigator
 * @brief main file for calling all tests
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
