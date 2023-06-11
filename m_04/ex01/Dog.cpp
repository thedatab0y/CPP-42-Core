#include "Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called!" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog String constructor called for " << _type << std::endl;
	this->_brain = new Brain();
	this->_type = type;
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called!" << std::endl;
	this->_brain = new Brain(*src._brain);
	*this = src;
	(void)src;
}

//destructor
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called for " << _type << std::endl;
}

//overload
Dog &	Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Dog const & i )
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

Brain* Dog::getBrain() const
{
	return this->_brain;
}