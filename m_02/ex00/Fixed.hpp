#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f); //Copy Constructor
		Fixed & operator = (const Fixed &f); //Copy assigment operator
		int getRawBits(void)const; //get raw bits
		void setRawBits(int const raw);//set raw bits
	private:
		int _value; // var to store the fixed-point value
		static const int _fraction = 8; //number of fractional bits used in fixed-point rep
};

#endif