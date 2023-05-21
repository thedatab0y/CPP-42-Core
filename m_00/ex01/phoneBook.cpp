#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::addContact(void)
{
	static int index = 0;
	if (index == 9)
		index = 0;
	storage[index].create();
	index++;
}

static void showfmt(std::string num)
{
	if (num.length() > 10)
	{
		num.resize(9);
		std::cout << num << "." << "|";
	}
	else
		std::cout << std::setw(10) << num << "|";
}

static std::string getin(const std::string prompt)
{
	std::string input = "";

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (! std::cin)
			input = "";
		std::cout << input << std::endl;
	}
	while (input == "");
	return (input);
}

void PhoneBook::show(void)
{
	for (int x = 0; x < 9; x++)
	{
		if (storage[x].first_name == "")
			break;
		std::cout << std::setw(10) << x << "|";
		showfmt(storage[x].first_name);
		showfmt(storage[x].last_name);
		showfmt(storage[x].nick_name);
		std::cout << std::endl;
	}
	storage[std::atoi(getin("Index of Entry to Display: ").c_str())].show();
}
