/**
 * @brief gtest quick start demo with clion
 * @date 2019/04/05
 * @author misayozihzw
 */

#include <iostream>
#include "gtest/gtest.h"

int main(int argc, char** argv) {
  std::cout << "Hello, World!" << std::endl;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
