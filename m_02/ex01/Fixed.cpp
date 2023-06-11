#include "Fixed.hpp"

//default constructor
Fixed::Fixed():_value(0)
{
	std::cout << "Default constructor called" << std::endl;
} 

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
} 

//int constructor called
Fixed::Fixed(const int n)
{	
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fraction;
}

//float constructor
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _fraction));
}

//copy constructor
Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
} 

//copy assigment operator 
Fixed & Fixed::operator =(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &f)
	{ //copy the raw bits of 'f' to the current object
		_value = f.getRawBits();
	} 
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return(_value);//return the raw fixed-point representation
}

void Fixed::setRawBits( int const raw )
{//set the raw fixed point repres
	_value = raw;
}

int Fixed::toInt( void ) const
{//convert the fix-point representation to an int value
	return(_value >> _fraction); //right shift operation on _value
}

//convert the fixed point repres to a floating point value
float Fixed::toFloat( void ) const
{//shifts 1 to the left by _fraction num of bits
	return((float) _value / (1 << _fraction));//devided by the val gained from before step
}

//output stream operator overload to print the fixed point value
std::ostream& operator << (std::ostream& os , const Fixed& f)
{//outputs the floating point val gained from f.toFloat() to output stream os
	os << f.toFloat();
	return(os);//output stream can be std::cout or any other
}