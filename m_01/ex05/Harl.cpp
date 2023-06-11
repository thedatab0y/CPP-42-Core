#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level)
{
    int tlevel = 0;
    // Define an array of function pointers to member functions of the Harl class
    void (Harl::*t1[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    // Define an array of strings representing different levels
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    while(tlevel < 4)
    {
        // Check if the current level matches the provided level
        if(levels[tlevel] == level)
        {
            // Call the appropriate member function based on the matched level
            (this->*t1[tlevel])();
            break;
        }
        tlevel++;
    }
}

void Harl::debug( void )
{
    std::cout <<  "love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}