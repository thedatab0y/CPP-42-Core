#include "Zombie.hpp"
#include <iostream> //input/output

int main(void)
{
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name; // Read the name

	Zombie zombi1(name);
	// create a Zombie object "zombi1" on the stack with the provided name

	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name; // Read the name

	Zombie *zombi2 = newZombie(name);
	// creates a Zombie obj "zombi2" on the heap using the newZombie function with the provided name
	zombi2->announce();
	// calling the announce() member function of the Zombie obj pointed to by "zombi2"
	delete zombi2;
	// deallocate the memory of the Zombie obj pointed to by "zombi2"

	std::cout << "Calling randomChump()." << std::endl;
	randomChump("randi");
	return 0;
}