#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &f);
		Fixed & operator = (const Fixed &f);
		int getRawBits (void) const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;

		Fixed operator+(const Fixed& obj)const;
		Fixed operator-(const Fixed& obj)const;
		Fixed operator*(const Fixed& obj)const;
		Fixed operator/(const Fixed& obj)const;

		bool operator>(const Fixed& obj)const;
		bool operator<(const Fixed& obj)const;
		bool operator==(const Fixed& obj)const;
		bool operator!=(const Fixed& obj)const;
		bool operator>=(const Fixed& obj)const;
		bool operator<=(const Fixed& obj)const;

		//prefiFixed increment
		Fixed& operator++();
		//postfiFixed increment
		Fixed operator++(int);
		//prefiFixed decrement
		Fixed& operator--();
		//postfiFixed decrement
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a,const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a,const Fixed &b);

	private:
		int _value;
		static const int _fraction = 8;
};

std::ostream& operator << (std::ostream& os ,const Fixed& f);

#endif