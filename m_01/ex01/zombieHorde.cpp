#include "Zombie.hpp"

//assigns the same name to each zombie in the horde.
Zombie* zombieHorde(int N, std::string name)
{
	//allocates an array of N Zombie objects using new
	Zombie *zombies = new Zombie[N];
	for (int x = 0; x < N; x++)//it sets the name of each zombie
		zombies[x].setName(name);//in the horde to the given name
	return (zombies);
}