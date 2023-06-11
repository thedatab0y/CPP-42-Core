#include "Cat.hpp"

//constructors
Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called!" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat String constructor called for " << _type << std::endl;
	this->_brain = new Brain();
	this->_type = type;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat Copy constructor called!" << std::endl;
	this->_brain = new Brain(*src._brain);
	*this = src;
}

//destructors
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called for " << _type << std::endl;
}

//overload
Cat &	Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Cat const & i )
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

Brain* Cat::getBrain() const
{
	return this->_brain;
}