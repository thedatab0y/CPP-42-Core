#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &s);//copy constructor
		FragTrap(std::string name);//parameterized constructor
		//overloading the assigment operator to control how objs copied (FragTrap a = b)
		FragTrap & operator =(const FragTrap &s);
		
		void 	highFivesGuys(void);
	private: 

}; 

#endif