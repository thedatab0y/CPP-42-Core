#include "Harl.hpp"

int main()
{
    Harl obj; // Creating an instance of the Harl class named 'obj'
    std::string level;

    std::cout << "Please enter the level number" << std::endl;
    std::cin >> level;
    obj.complain(level);
    return (0);
}