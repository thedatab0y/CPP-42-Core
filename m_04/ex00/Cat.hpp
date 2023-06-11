#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(std::string type);
		Cat( Cat const & src );
		~Cat();
		Cat & operator=( Cat const & value );
		virtual std::string getType() const;
		void makeSound() const;
};
//stream insertion operator overload
std::ostream &	operator<<( std::ostream & o, Cat const & i );

#endif