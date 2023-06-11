#include "Zombie.hpp"

#define N 4

int main()
{
	//creates ptr var 'zombie'to store the & of zombie horde
	Zombie *zombie = zombieHorde(N, "erkak");

	//looping over each zombie in horde and announcing them 
	for (size_t x = 0; x < N; x++)
		zombie[x].announce();
	
	//deleting zombie horde to free
	delete [] zombie;
	return 0;
}