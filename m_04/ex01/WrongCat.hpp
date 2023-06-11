#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(std::string type);
		WrongCat( WrongCat const & src );
		~WrongCat();

		WrongCat &	operator=( WrongCat const & value );

		std::string getType() const;

		void makeSound() const;

};

std::ostream &	operator<<( std::ostream & o, WrongCat const & i );

#endif