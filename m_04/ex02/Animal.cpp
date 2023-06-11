#include "Animal.hpp"

//constructor
Animal::Animal()
{
	_type = "Pet";
	std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal String constructor called for " << _type << std::endl;
}

Animal::Animal( const Animal & src )
{ //suppresses unused parameter warning
	(void)src;
	std::cout << "Animal Copy constructor called for " << _type << std::endl;
}

//destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called for " << _type << std::endl;
}

// Assignment operator overload
Animal & Animal::operator=( Animal const & value )
{
	(void)value;
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

// Stream insertion operator overload
std::ostream &	operator<<( std::ostream & o, Animal const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

//methods
void	Animal::makeSound() const
{
	std::cout << "Animal sounds from " << _type << std::endl;
}

//accessor
std::string Animal::getType() const
{
	return _type;
}