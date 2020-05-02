//
// Created by misayozihzw on 2020/5/2.
//

#include "Complex.h"     // for Complex
#include "gtest/gtest.h" // for gtest functions

namespace ss {

// Tests the c'tor.
TEST(Complex, ExplicitConstructor) {
  Complex comp(1, 2);
  EXPECT_EQ(comp.real(), 1);
  EXPECT_EQ(comp.imag(), 2);
}

// Tests the operator+ one param
TEST(Complex, OpAddComplex) {
  Complex comp1(1, 2);
  Complex comp2(2, 3);

  comp1 += comp2;
  EXPECT_EQ(comp1.real(), 3);
  EXPECT_EQ(comp1.imag(), 5);

  comp1 = comp1 + comp2;
  EXPECT_EQ(comp1.real(), 5);
  EXPECT_EQ(comp1.imag(), 8);
}

// Tests the operator+ two param
TEST(Complex, OpAddTwoComple) {
  Complex comp1(1, 2);
  Complex comp2(2, 3);

  Complex comp(0, 0);
  comp = comp1 + comp2;

  EXPECT_EQ(comp.real(), 3);
  EXPECT_EQ(comp.imag(), 5);
}

// Tests the operator+ two param
TEST(Complex, OpAddXComple) {
  double x = 1;
  Complex comp2(2, 3);

  Complex comp(0, 0);
  comp = x + comp2;

  EXPECT_EQ(comp.real(), 3);
  EXPECT_EQ(comp.imag(), 3);
}

// Tests the operator+ two param
TEST(Complex, OpAddCompleY) {
  Complex comp1(1, 2);
  double y = 1;

  Complex comp(0, 0);
  comp = comp1 + y;

  EXPECT_EQ(comp.real(), 2);
  EXPECT_EQ(comp.imag(), 2);
}

} // namespace ss


