
#include "Fixed.hpp"

Fixed::Fixed():_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; 
}

//prints mesg & delegates the copying logic to copy assigment operator
Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f; //asking the copy assigment operator to copy the values from 'f'
}

Fixed & Fixed::operator =(const Fixed &f) //return ref to 'Fixed' obj.
{//takes const ref to 'Fixed' obj named 'f'
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &f) //checking for self assigment
	{ 
		_value = f.getRawBits(); //copies the raw bits from f
	} 
	return *this; //returning a ref to the modified obj
}

//getter . accesses the internal rep of fixed point num in '_value'
int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value); //return the val of '_value'
}

//setter
void Fixed::setRawBits(int const raw)
{
	_value = raw; //set the val of '_value' to the given 'raw' value
}

//const int Fixed::fraction = 8;