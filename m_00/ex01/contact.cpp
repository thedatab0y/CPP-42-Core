#include "Contact.hpp"

// :: scope resolution operator

void Contact::init()
{
	if (!std::cin.eof())
		std::cout << "Please enter a first name: ";
	std::cin >> this->FirstName;
	if (!std::cin.eof())
		std::cout << "Please enter a last name: ";
	std::cin >> this->LastName;
	if (!std::cin.eof())
		std::cout << "Please enter a nickname: ";
	std::cin >> this->Nickname;
	if (!std::cin.eof())
		std::cout << "Please enter a phone number: ";
	std::cin >> this->PhoneNumber;
	if (!std::cin.eof())
		std::cout << "Please enter the darkest secret: ";
	std::cin >> this->DarkestSecret;
	if (!std::cin.eof())
		std::cout << "--- User has been added successfully! ---" << std::endl;
}

void Contact::printFullInfo()
{
	std::cout << std::endl << "Here are the pieces of information I have : " << std::endl;
	std::cout << " First Name : " << this->getFirstName() << std::endl;
	std::cout << " Last name : " << this->getLastName() << std::endl;
	std::cout << " Nickname : " << this->getNickname() << std::endl;
	std::cout << " Phone Number : " << this->getPhoneNumber() << std::endl;
	std::cout << " Darkest secret : " << this->getDarkestSecret() << std::endl;
}

//setter
void Contact::setFirstName(std::string value)
{
	FirstName = value;
}

//getter
std::string Contact::getFirstName()
{
	return FirstName;
}

//setter
void Contact::setLastName(std::string value)
{
	LastName = value;
}

//getter
std::string Contact::getLastName()
{
	return LastName;
}

void Contact::setNickname(std::string value)
{
	Nickname = value;
}

std::string Contact::getNickname()
{
	return Nickname;
}

void Contact::setPhoneNumber(std::string value)
{
	PhoneNumber = value;
}

std::string Contact::getPhoneNumber()
{
	return PhoneNumber;
}

void Contact::setDarkestSecret(std::string value)
{
	DarkestSecret = value;
}

std::string Contact::getDarkestSecret()
{
	return DarkestSecret;
}