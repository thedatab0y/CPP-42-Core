#include "Weapon.hpp"

// Constructor
Weapon::Weapon(std::string type): type(type)
{}

// Member function
// Returns a const reference to the 'type' member variable
const std::string& Weapon::getType()const
{
	return type;
}

// Updates the 'type' member variable with the provided argument
void Weapon::setType(std::string type)
{
	this->type = type;
}