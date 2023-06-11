#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Destructor!!\nName: " << Name << std::endl;
}

//set the name of a Zombie object
void Zombie::setName(std::string const& Name)
{
	this->Name = Name;
}
