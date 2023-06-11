#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name);//creates instanse object called zombie

	zombie.announce();
}
