#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName(std::string const& Name);
	private:
		std::string Name;
};

Zombie*	zombieHorde(int N, std::string name );

#endif