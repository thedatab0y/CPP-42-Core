#include "Brain.hpp"

//constructor
Brain::Brain()
{
	std::cout << "Brain Default constructor called!" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src; // Calls the assignment operator to perform a deep copy
	std::cout << "Brain Copy constructor called!" << std::endl;
}

//destructor
Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

//overload
Brain &	Brain::operator=( Brain const & rhs )
{// Check for self-assignment
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];// Perform a deep copy of the ideas array element by element
	}// Return a reference to the current object
	return *this;
}

// Stream insertion operator overload
std::ostream &	operator<<( std::ostream & o, Brain const & i )
{
	(void)i;// Suppress unused parameter warning
	// o << "Value = " << i.getValue();
	return o;// Return the output stream 
}
