#include "FragTrap.hpp"


FragTrap::FragTrap(){
	std::cout << "FragTrap constructor called" << std::endl;
} 

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap " << name  << " is born."<< std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
} 

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
} 

FragTrap::FragTrap(const FragTrap &s){
	// std::cout << "Copy constructor called" << std::endl;
	 *this = s;
} 

FragTrap & FragTrap::operator =(const FragTrap &s){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_name			= s._name;
	this->_hitpoints 	= s._hitpoints;
	this->_energypoints	= s._energypoints;
	this->_attackdamage	= s._attackdamage;
	return *this;
} 

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->_name << " high FIVE" << std::endl;
}