#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>
#include <limits.h>

class ClapTrap
{
	public:
		ClapTrap(); //default constructor
		ClapTrap(std::string name);//parameterized constructor that init ClapTrap obj's name to given name
		~ClapTrap();//destructor
		ClapTrap(const ClapTrap &c);//copy constructor
		ClapTrap & operator = (const ClapTrap &c);//copy assignment operator
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beReparied(unsigned int amount);
	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energypoints;
		unsigned int _attackdamage;
};

#endif