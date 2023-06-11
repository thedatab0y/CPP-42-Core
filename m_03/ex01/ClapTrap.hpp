#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>
#include <limits.h>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &c);
		ClapTrap & operator =(const ClapTrap &c);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
};

#endif