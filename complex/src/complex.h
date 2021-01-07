#include <iostream>
#include <cmath>

class Complex {
  private:
		int real_num_, imag_num_;
	public:
		Complex (int realnum, int imagnum);
		void print();
		void addition (Complex & complex2);
		void subtraction (Complex & complex2);
		void multiplication (Complex & complex2);
		void division (Complex & complex2);
};