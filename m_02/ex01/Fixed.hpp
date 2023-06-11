#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>
#include <cmath>

//fixed point num = the position of the decimal point is fixed, hence fixed-point 

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &f);
		Fixed & operator = (const Fixed &f);
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
	private:
		int _value;
		static const int _fraction = 8;
};
//custom way of outputing a 'Fixed' obj to output stream. control how Fixed obj is displayed
std::ostream& operator << (std::ostream& os, const Fixed& f);

#endif