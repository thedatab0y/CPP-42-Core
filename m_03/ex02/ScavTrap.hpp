#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &s);
		ScavTrap & operator =(const ScavTrap &s);
		
	void	guardGate();
	private: 

}; 

#endif