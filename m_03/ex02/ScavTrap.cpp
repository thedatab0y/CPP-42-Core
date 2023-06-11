#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor called" << std::endl;
} 


ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap " << name  << " is born."<< std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
} 

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
} 

ScavTrap::ScavTrap(const ScavTrap &s){
	 *this = s;
} 

ScavTrap & ScavTrap::operator =(const ScavTrap &s){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_name			= s._name;
	this->_hitpoints 	= s._hitpoints;
	this->_energypoints	= s._energypoints;
	this->_attackdamage	= s._attackdamage;
	
	return *this;
} 

void	ScavTrap::guardGate(){
	std::cout << "ScravTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}