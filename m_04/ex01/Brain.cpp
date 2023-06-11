#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called!" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain Copy constructor called!" << std::endl;
}

//destructor
Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

//overload
Brain &	Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Brain const & i )
{
	(void)i;
	// o << "Value = " << i.getValue();
	return o;
}