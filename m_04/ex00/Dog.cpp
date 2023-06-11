#include "Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->_type = type;
	std::cout << "Dog String constructor called for " << _type << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	(void)src;
	std::cout << "Dog Copy constructor called!" << std::endl;
}

//destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called for " << _type << std::endl;
}

//overload
Dog &				Dog::operator=( Dog const & value )
{
	(void)value;
	//if ( this != &value )
	//{
		//this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

//methods
void	Dog::makeSound() const
{
	std::cout << "WOOOOFFF WOOOOFFF" << std::endl;
}

//accessor
std::string Dog::getType() const
{
	return _type;
}