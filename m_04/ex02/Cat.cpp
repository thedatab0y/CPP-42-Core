#include "Cat.hpp"

//constructors
Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called!" << std::endl;
	this->_brain = new Brain(); // Create a new Brain object for the Cat
	this->_type = "Cat";// Set the type of the Cat
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat String constructor called for " << _type << std::endl;
	this->_brain = new Brain();// Create a new Brain object for the Cat
	this->_type = type;// Set the type of the Cat
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat Copy constructor called!" << std::endl;
	this->_brain = new Brain(*src._brain); // Create a new Brain object by copying the source Cat's brain
	this->_type = src._type;// Set the type of the Cat
}

//destructor
Cat::~Cat()
{
	delete _brain;// Delete the dynamically allocated Brain object
	std::cout << "Cat destructor called for " << _type << std::endl;
}

//overloads
Cat &	Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )// Check for self-assignment
	{// Create a new Brain object by copying the right-hand side Cat's brain
		_brain = new Brain(*rhs._brain);
		_type = rhs._type;// Assign the type of the Cat
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Cat const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;// Return the output stream
}

// Method: makeSound
void	Cat::makeSound() const
{
	std::cout << "MMMMMMMEEEEEEEEEOOOOOOOOOOOWWWWWWW" << std::endl;
}

//accessor
std::string Cat::getType() const
{
	return _type; // Return the type of the Cat
}

Brain* Cat::getBrain() const
{
	return this->_brain;// Return a pointer to the Cat's Brain object
}