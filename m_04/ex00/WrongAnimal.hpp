#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal & operator=( WrongAnimal const & value );

		std::string getType() const;

		void makeSound() const;
};

std::ostream & operator<<( std::ostream & o, WrongAnimal const & i );

#endif 