#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	:name(name) //init the name member var with the given arg
{
	this->weapon = nullptr; // set the weapon pointer to null
}

// Destructor
HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon& weapon)
{
	//setint the weapon ptr to address of given weapon obj
	this->weapon = &weapon;
}
 
void HumanB::attack()const
{
	//if weapon is not null & type not empty
	if (this->weapon != nullptr && this->weapon->getType() != "")
		std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon to attack." << std::endl;
}