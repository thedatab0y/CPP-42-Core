#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot1 ("BotOne");
	ClapTrap bot2 ("BotTwo");
	ClapTrap bot3(bot1);

	std::cout << std::endl;
	std::cout << "Battle: BotOne vs BotTwo" << std::endl;
	std::cout << std::endl;

	bot1.attack("BotTwo");
	bot1.takeDamage(4);
	bot1.beReparied(4);

	bot2.attack("BotOne");
	bot2.takeDamage(20);
	bot2.beReparied(20);
}
