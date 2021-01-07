#include "complex.h"

int main() {
  std::cout << "This programme will operate with complex numbers:"<< std::endl << std::endl;
  Complex complex1(8,6), complex2(2, -4);
  complex1.addition(complex2);
  complex1.print();
  complex1.subtraction(complex2);
  complex1.print();
  complex1.multiplication(complex2);
  complex1.print();
  complex1.division(complex2);
  complex1.print();
}