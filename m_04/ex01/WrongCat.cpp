#include "WrongCat.hpp"

//constructor
WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default constructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->_type = type;
	std::cout << "WrongCat String constructor called for " << _type << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	(void)src;
	std::cout << "WrongCat Copy constructor called!" << std::endl;
}

//destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called for " << _type << std::endl;
}

//overload
WrongCat &	WrongCat::operator=( WrongCat const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, WrongCat const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

//methods
void	WrongCat::makeSound() const
{
	std::cout << "MMMMMMMEEEEEEEEEOOOOOOOOOOOWWWWWWW" << std::endl;
}

//accessor
std::string WrongCat::getType() const
{
	return _type;
}