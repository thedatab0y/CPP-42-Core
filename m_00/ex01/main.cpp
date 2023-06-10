#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int main(void)
{
	std::string buffer; // store user input
	PhoneBook book; // instance of PhoneBook class

	book.welcomeMessage(); // display a welcome message
	while (buffer != "EXIT") // loop till user enters "EXIT"
	{
		if (std::cin.eof())
			break;
		std::cout << "> ";
		std::cin >> buffer; // read user input into buffer
		if (buffer == "ADD") //checking the value of buffer
			book.Add();
		else if (buffer == "SEARCH")
			book.searchContact();
		else if (buffer != "EXIT" && !std::cin.eof())
		{
			std::cout << "Sorry, but the command \033[31m[" << buffer << "]\033[0m does not exit." << std::endl;
			std::cout << "Try one of the following: ADD, SEARCH or EXIT" << std::endl;
		}
	}
	std::cout << "\033[33mLooking forward to seeing you again\033[0m" << std::endl;

	return (0);
}