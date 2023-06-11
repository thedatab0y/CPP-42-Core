#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include <iostream>
#include "ClapTrap.hpp"

//class that publicly inherits from the ClapTrap class
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		//allowing me to provide a name when ScavTrap created
		ScavTrap(std::string name);//overloaded constructor
		~ScavTrap();
		ScavTrap(const ScavTrap &s);//copy constructor
		ScavTrap & operator =(const ScavTrap &s);//assigment operator
		void	guardGate();//member func
	private: 

}; 

#endif