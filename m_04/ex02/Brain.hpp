#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &	operator=( Brain const & rhs );
};

std::ostream &	operator<<( std::ostream & o, Brain const & i );

#endif