//
// Created by misayozihzw on 2020/5/2.
//

#ifndef CLION_GTEST_DEMO_COMPLEX_H
#define CLION_GTEST_DEMO_COMPLEX_H

#include <ostream>

class Complex {
public:
  explicit Complex(double re = 0, double im = 0)
    : re_(re), im_(im) {}

  // operator+ 单参数(隐含this)
  Complex& operator+=(const Complex &);

  //Attention: Overloaded 'operator+' must be a unary or binary operator (has 3 parameters)
  //Complex operator + (const Complex& x, const Complex& y); // 隐含this指针
  friend Complex operator+(const Complex& x, const Complex& y);
  friend Complex operator+(const Complex& x, double y);
  friend Complex operator+(double x, const Complex& y);

  double real() const { return re_; }
  double imag() const { return im_; }

  friend std::ostream &operator<<(std::ostream &os, const Complex &complex) {
    os << "re_: " << complex.re_ << " im_: " << complex.im_;
    return os;
  }

private:
  double re_; // 实部
  double im_; // 虚部
};

#endif //CLION_GTEST_DEMO_COMPLEX_H
