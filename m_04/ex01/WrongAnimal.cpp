#include "WrongAnimal.hpp"

//constructor
WrongAnimal::WrongAnimal()
{
	_type = "Pet";
	std::cout << "WrongAnimal Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << "WrongAnimal String constructor called for " << _type << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	(void)src;
	std::cout << "WrongAnimal Copy constructor called for " << _type << std::endl;
}

//destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called for " << _type << std::endl;
}


//overload
WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, WrongAnimal const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

//methods
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds from ----->>>> " << _type << std::endl;
}

//accessor
std::string WrongAnimal::getType() const
{
	return _type;
}