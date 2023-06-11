#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
		
	public:

		Cat();
		Cat(std::string type);
		Cat( Cat const & src );
		~Cat();
		Cat & operator=( Cat const & value );
		std::string getType() const;
		void makeSound() const;
		Brain* getBrain() const;
};

std::ostream &	operator<<( std::ostream & o, Cat const & i );

#endif