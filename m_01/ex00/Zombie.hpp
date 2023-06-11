#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string const& _Name);
		~Zombie();
		void announce( void );
	private:
		std::string Name;
};

Zombie	*newZombie(std::string name);
void 	randomChump(std::string name);

#endif