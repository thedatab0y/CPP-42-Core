#include "contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int main(void)
{
	PhoneBook phonebook;

	std::string input;

	while (true)
	{
		std::cout << "Possible options: ADD, SEARCH or EXIT" << std::endl;

		std::cout << "> ";

		std::getline(std::cin, input);

		if (input == "ADD")
		{
			std::cout << "Adding." << std::endl;

			phonebook.addContact();
		}

		else if (input == "SEARCH")
		{
			std::cout << "Searching." << std::endl;
			phonebook.show();
		}
		else if (input == "EXIT")
		{
			break;
		}
	}

	return (0);
}