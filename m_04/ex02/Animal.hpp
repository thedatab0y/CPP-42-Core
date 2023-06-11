#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal();//default constructor
		Animal(std::string type);//parameterized constructor
		Animal( Animal const & src );//copy constructor
		virtual ~Animal();
		//assigment operator
		Animal & operator=( Animal const & value );//overloaded assigment operator
		virtual std::string getType() const = 0;//method to get type of animal
		virtual void makeSound() const = 0;//method to make the animal's sound
};

//stream insertion operator overload
std::ostream &	operator<<( std::ostream & o, Animal const & i );

#endif