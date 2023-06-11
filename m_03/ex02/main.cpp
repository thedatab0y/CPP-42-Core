#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    FragTrap B ("BotOne");//obj B is created
    FragTrap C ("foo");//obj C is created
    
    B.attack("BotOne");
    B.takeDamage(7);
    B.beRepaired(4);
    std::cout << "/*****************/" << std::endl;
    C.attack("BotTwo");
    C.takeDamage(20);
    C.beRepaired(20);
    C.highFivesGuys();
}
