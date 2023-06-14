#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal( Animal const & src );
		virtual ~Animal();
		Animal & operator=( Animal const & value );
		virtual std::string getType() const;
		virtual void makeSound() const;
};

std::ostream &	operator<<( std::ostream & o, Animal const & i );

#endif