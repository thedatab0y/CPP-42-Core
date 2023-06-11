#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:

		Dog();
		Dog(std::string type);
		Dog( Dog const & src );
		~Dog();

		Dog &	operator=( Dog const & value );

		std::string getType() const;

		void makeSound() const;
		Brain* getBrain() const;
};

std::ostream &	operator<<( std::ostream & o, Dog const & i );

#endif