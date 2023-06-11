#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

//called when obj of ClapTrap is created with a str name
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " is born."<< std::endl;
	//set name of current obj _name to given name
	this->_name = name; // ptr that points to the current obj
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;//init the attribute of current obj to 0
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
}

//creating a new ClapTrap obj as a copy of existing one
ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
}

//called when assigning the value of one Claptrap obj to another
ClapTrap & ClapTrap::operator = (const ClapTrap &c)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	//coping the _hitpoints attribute from srs obj to this obj
	this->_name = c._name;
	this->_hitpoints = c._hitpoints;
	this->_energypoints = c._energypoints;
	this->_attackdamage = c._attackdamage;
	//returns ref to obj it is assigning to, allowing for chain of assigment operations
	return *this;
}

//ClapTrap to attack a target that is passed as str
void ClapTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (_energypoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackdamage << " of damages" << std::endl;
	//Reducing the energy points of 'ClapTrap' by 1 because it used energy to perform attack.
	_energypoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}

	if (_hitpoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		_hitpoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	//Reducing hitpoints of 'ClapTrap' by amount of damage it's taking
	_hitpoints -= amount;
}

//repair itself
void ClapTrap::beReparied(unsigned int amount)
{
	if(_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (_energypoints <= 0)
	{
		std::cout << "ClapTrap" << _name << " repaires itself with " << amount << " hit points! " << std::endl;
		//reducing energy points of 'ClapTrap' by 1 as it used energy to perform repair
		_energypoints -= 1;
		//checking if adding repair amount would cause an overflow in hitpoints (> than maximum unsigned int val)
		if (_hitpoints >= UINT_MAX - amount)
			_hitpoints = UINT_MAX;//if so, set hitpoints to maximum unsigned int val
		//otherwise, add repair amount to hitpoints of the 'ClapTrap'
		_hitpoints += amount;
	}
}