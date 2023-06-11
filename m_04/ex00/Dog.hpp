#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog( Dog const & src );
		~Dog();
		Dog & operator=( Dog const & value );
		std::string getType() const;
		void makeSound() const;
};

std::ostream & operator<<( std::ostream & o, Dog const & i );

#endif