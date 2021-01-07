#include "complex.h"

Complex::Complex (int realnum, int imagnum) {
  real_num_ = realnum;
  imag_num_ = imagnum;
}

void Complex::print() {
  std::cout << real_num_ << " + " << imag_num_ << "i" << std::endl;
}

void Complex::addition (Complex & complex2) {
  real_num_ = real_num_ + complex2.real_num_;
  imag_num_ = imag_num_ + complex2.imag_num_;
}

void Complex::subtraction (Complex & complex2) {
  real_num_ = real_num_ - complex2.real_num_;
  imag_num_ = imag_num_ - complex2.imag_num_;
}

void Complex::multiplication (Complex & complex2) {
  int real_num_output = (real_num_ * complex2.real_num_) + (-1) * (imag_num_* complex2.imag_num_) ;
  int imag_num_output = (imag_num_ * complex2.real_num_) + (real_num_ * complex2.imag_num_);
  real_num_ = real_num_output;
  imag_num_ = imag_num_output;
}

void Complex::division (Complex & complex2) {
  Complex My_Conjugate ( complex2.real_num_, (-1) * complex2.imag_num_);
  int divisor = pow(complex2.real_num_, 2) + (-1) * (imag_num_ * My_Conjugate.imag_num_);
  int real_num_output = (real_num_ * My_Conjugate.real_num_) + (-1) * (imag_num_* My_Conjugate.imag_num_);
  int imag_num_output = (imag_num_ * My_Conjugate.real_num_) + (real_num_ * My_Conjugate.imag_num_);
  real_num_ = real_num_output / divisor;
  imag_num_ = imag_num_output / divisor;
}