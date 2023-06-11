#include "Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called!" << std::endl;
	this->_brain = new Brain();// Create a new Brain object for the Dog
	this->_type = "Dog"; // Set the type of the Dog
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog String constructor called for " << _type << std::endl;
	this->_brain = new Brain();// Create a new Brain object for the Dog
	this->_type = type;
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called!" << std::endl;
	this->_brain = new Brain(*src._brain);// Create a new Brain object by copying the source Dog's brain
	*this = src;// Copy the values of the source Dog to the current Dog
	(void)src;
}

//destructor
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called for " << _type << std::endl;
}

//overloads
Dog &	Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		_brain = new Brain(*rhs._brain);// Create a new Brain object by copying the right-hand side Dog's brain
		_type = rhs._type; // Assign the type of the Dog
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

//accessors
std::string Dog::getType() const
{
	return _type;
}

Brain* Dog::getBrain() const
{// Return a pointer to the Dog's Brain object
	return this->_brain;
}