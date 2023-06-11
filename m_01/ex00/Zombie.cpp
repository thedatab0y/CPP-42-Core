#include "Zombie.hpp"
#include <iostream> //input/output operations

void Zombie::announce(void)
{
	// Print the name of the zombie followed by message
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//constructor
Zombie::Zombie(std::string const& Name)
	: Name (Name)
{}

//destructor
Zombie::~Zombie()
{
	std::cout << "Destrcutor!!\nName: " << Name << std::endl;
}
