#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
} 

//constructor for the ScavTrap class that takes a name as parameter
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name  << " is born."<< std::endl;
	// this sets the _name member variable of ScavTrap obj to name passed into constructor
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
} 

//copy constructor that takes ref to another ScavTrap as parameter
ScavTrap::ScavTrap(const ScavTrap &s)
{//special pointer that points to current obj
	 *this = s;
} 

//assignment operator for ScavTrap class that takes ref to another ScavTrap as parameter
ScavTrap & ScavTrap::operator =(const ScavTrap &s)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_name			= s._name;
	this->_hitpoints 	= s._hitpoints;
	this->_energypoints	= s._energypoints;
	this->_attackdamage	= s._attackdamage;
	//return a reference to this object
	return *this;//allows to chain assignment operations like a = b = c
}

//member function of ScavTrap class
void	ScavTrap::guardGate()
{
	std::cout << "ScravTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}