#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        // Create a Weapon object called 'club' with the provided type
        Weapon club = Weapon("crude spiked club");
        // Create a HumanA object called 'bob' with name "Bob" and the 'club' weapon
        HumanA bob("Bob", club);
        // Call the attack function for 'bob'
        bob.attack();
        // Change the type of 'club'
        club.setType("some other type of club");
        // Call the attack function for 'bob' again
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        // Set the weapon of 'jim' to the 'club' weapon
        jim.setWeapon(club);
        jim.attack();
        // Change the type of 'club'
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}