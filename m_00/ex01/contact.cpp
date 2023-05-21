#include "contact.hpp"

// :: scope resolution operator

Contact::Contact (void)
{
	std::cout << "Contact constructor called" << std::endl;
	first_name = "";
	last_name = "";
	nick_name = "";
	phone_number = "";
	secret = "";
}

Contact::~Contact (void)
{
	std::cout << "Contact destructor called" << std::endl;
}

// function "getin" that promts the user for input
static std::string getin(const std::string prompt)
{
	std::string input = "";

	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if(!std::cin)
			input = "";
		std::cout << input << std::endl;
	}
	while (input == "");
	return (input);
}

void Contact::create(void)
{
	this->first_name = getin("First name: ");
	this->last_name = getin("Last name: ");
	this->nick_name = getin("Nickname: ");
	this->phone_number = getin("Phone number: ");
	this->secret = getin("Darkest Secret: ");
}

void Contact::show(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << secret << std::endl;
}
