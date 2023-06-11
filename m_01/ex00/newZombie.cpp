#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
	//the new operator not only allocates memory
	// but also invokes the constructor of the class to init the obj
}

//new is  for dynamic memory allocation of objects, specifically for constructing and initializing objects