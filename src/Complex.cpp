//
// Created by misayozihzw on 2020/5/2.
//

#include "Complex.h"

Complex& Complex::operator+=(const Complex & rhs) {
  this->re_ += rhs.re_;
  this->im_ += rhs.im_;
  return *this;
}

Complex operator+(double x, const Complex &y) {
  return Complex(x + y.re_, y.im_);
}

Complex operator+(const Complex &x, double y) {
  return Complex(x.re_ + y, x.im_);
}

Complex operator+(const Complex &x, const Complex &y) {
  return Complex(x.re_ + y.re_, x.im_ + y.im_);
}
