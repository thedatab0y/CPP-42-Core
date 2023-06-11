#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name  << " is born."<< std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
} 

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
} 

//called when assigning the value of one Claptrap obj to another
ClapTrap & ClapTrap::operator =(const ClapTrap &c)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	//coping the _hitpoints attribute from srs obj to this obj
	this->_name			= c._name;
	this->_hitpoints 	= c._hitpoints;
	this->_energypoints	= c._energypoints;
	this->_attackdamage	= c._attackdamage;
	return *this;
}

//ClapTrap to attack a target that is passed as str
void ClapTrap::attack(const std::string& target)
{
	
	if (_hitpoints <= 0){
		std::cout << "ClapTrap " << _name << " is allready dead." << std ::endl;
		return;
	}
	if (_energypoints <= 0){
		std::cout << "ClapTrap " << _name << " is out of energy" << std ::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackdamage << " of damages" << std ::endl;
	//Reducing the energy points of 'ClapTrap' by 1 because it used energy to perform attack.
	_energypoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	if (_hitpoints <= 0){
		std::cout << "ClapTrap " << _name << " is allready dead." << std ::endl;
		return;
	}
	
	if (_hitpoints <= amount){
		std::cout << "ClapTrap " << _name << " is dead." << std ::endl;
		_hitpoints = 0;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage! "  << std ::endl;
	//Reducing hitpoints of 'ClapTrap' by amount of damage it's taking
	_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	
	if (_hitpoints <= 0){
		std::cout << "ClapTrap " << _name << " is allready dead." << std ::endl;
		return;
	}
	if (_energypoints <= 0){
		std::cout << "ClapTrap " << _name << " has no energy points" << std ::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself with " << amount << " hit points! " << std ::endl;
	//reducing energy points of 'ClapTrap' by 1 as it used energy to perform repair
	_energypoints -= 1;
	if (_hitpoints >= UINT_MAX - amount)
		_hitpoints = UINT_MAX;
	_hitpoints += amount;
} 