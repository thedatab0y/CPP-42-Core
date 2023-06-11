#include "Cat.hpp"

//constructor
Cat::Cat() : Animal()
{
	this->_type = "Cat";// Set the type of the Cat
	std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->_type = type; //set the type of cat
	std::cout << "Cat String constructor called for " << _type << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	(void)src;//suppresses unused parameter warning 
	std::cout << "Cat Copy constructor called!" << std::endl;
}

//destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called for " << _type << std::endl;
}

//overload
Cat &				Cat::operator=( Cat const & value )
{
	(void)value; //suppresses unused parameter warning
	// if ( this != &value )
	//{
	// this->_value = value.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}

//methods
void	Cat::makeSound() const
{
	std::cout << "MMMMMMMEEEEEEEEEOOOOOOOOOOOWWWWWWW" << std::endl;
}

//accessor
std::string Cat::getType() const
{
	return _type;
}
