#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main ()
{
    // ClapTrap A ("BotOne");
    // ClapTrap B ("BotTwo");
    ScavTrap C ("foo");
    
    // A.attack("BotTwo");
    // A.takeDamage(4);
    // A.beRepaired(4);

    C.attack("BotOne");
    C.takeDamage(20);
    C.beRepaired(20);
    C.guardGate();
}