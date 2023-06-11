#include "Fixed.hpp"

Fixed::Fixed():_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
} 

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const int n)
{	
	// std::cout << "Int constructor called" << std::endl;
	_value = n << _fraction;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _fraction));
}

Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
} 

Fixed & Fixed::operator =(const Fixed &f)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if(this != &f)
	{ 
		_value = f.getRawBits();
	} 
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return(_value);
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
}

int Fixed::toInt( void ) const
{
	return(_value >> _fraction);
}

float Fixed::toFloat( void ) const
{
	return((float) _value / (1 << _fraction));
}

std::ostream& operator << (std::ostream& os , const Fixed& f)
{
	os << f.toFloat();
	return(os);
}

//creating a new 'Fixed' obj with the sum of current and passed obj
Fixed Fixed::operator+(const Fixed& obj) const
{
	return (Fixed(this->_value + obj._value));
}

//difference between the values of current and passed obj
Fixed Fixed::operator-(const Fixed& obj) const
{
	return (Fixed(this->_value - obj._value));
}

//new obj with the product of the values of current and passed obj
Fixed Fixed::operator*(const Fixed& obj) const
{
	Fixed mult;
	mult.setRawBits((_value * obj._value) >> _fraction);
	return (mult);
}

//new obj with the devision of the values of current and passed obj
Fixed Fixed::operator/(const Fixed& obj) const
{
	Fixed fract;
	fract.setRawBits(((float)(_value) / obj._value) * (1 << _fraction));
	return (fract);
}

//compare the values of current and passed objs
bool Fixed::operator>(const Fixed& obj)const
{
	
	return(this->_value > obj._value);
}

//compare the values of current and passed objs
bool Fixed::operator<(const Fixed& obj)const
{
	
	return(this->_value < obj._value);
}

//check the values of current and passed objs are equal
bool Fixed::operator==(const Fixed& obj)const
{
	return(!operator>(obj) && !operator<(obj));
}

//check the values of current and passed objs are NOT equal
bool Fixed::operator!=(const Fixed& obj)const
{
	return(!operator==(obj));
}

bool Fixed::operator>=(const Fixed& obj)const
{
	return (operator>(obj) || operator==(obj));
}

bool Fixed::operator<=(const Fixed& obj)const
{
	return (operator<(obj) || operator==(obj));
}

//increment the val of current obj and return a reference to itself
Fixed& Fixed::operator++()
{
    this->_value++;
    return (*this);
}

//creat a copy of current obj, increment value, return the copy(post increment)
Fixed Fixed::operator++(int)
{
    Fixed old = *this; 
    operator++();  
    return (old);
}

//decrement the val of current obj and return a reference to itself
Fixed& Fixed::operator--()
{
    this->_value--;
    return *this;
}

//creat a copy of current obj, decrement value, return the copy(post increment)
Fixed Fixed::operator--(int)
{
    Fixed old = *this; 
    operator--();  
    return old;
}

//return a reference to the minimum value between 'a' and 'b
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

//return a reference to the minimum val between 'a' and 'b' (const version)
const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

//return a reference to the maximum value between 'a' and 'b'
Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

//return a reference to the maximum value between 'a' and 'b' (const version)
const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
