#include "PhoneBook.hpp"
// constructor of the PhoneBook class
//it is called when a new object of the PhoneBook class is created.
PhoneBook::PhoneBook()
{
	nb_contact = 0;
	std::cout << "Constactor called" << std::endl;
}

void PhoneBook::welcomeMessage()
{
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "\033[32mWelcome to the simplest phonebook system you have ever known!\033[0m" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
	std::cout << "\033[33mThe available commands are:" << std::endl;
    std::cout << "ADD: Add a user to your phonebook." << std::endl;
    std::cout << "SEARCH: Search by ID in your phonebook." << std::endl;
    std::cout << "EXIT: Close your phonebook.\033[0m" << std::endl;
    std::cout << "**************************************************************************" << std::endl;
    std::cout << "\033[31m** To access the HELP command, follow me on GitHub @thedatab0y ;) **\033[0m" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
}

void PhoneBook::Add(void)
{
	static int x; // Static local variable to keep track of the index for adding new contacts
	// Access the book array at index (x % 8) and initialize the contact
	// This allows cycling through the book array for adding new contacts
	book[x % 8].init();
	if (nb_contact < 8)
		nb_contact++;
	x++;
}

void printTabHead()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "| Index | FirstName | LastName | Nickname |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

void formatString(std::string value)
{
	// Calculate the number of spaces to add before and after the value
    int addSpace = 9 - value.length();

    if (addSpace >= 0) // Check if spaces need to be added
    {
        if ((addSpace % 2) == 0) // is even?
        {
			// Add half of the spaces before the value
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
            std::cout << value; //output
			 // Add the remaining half of the spaces after the value
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
        }
        else
        {
			// Add half of the spaces before the value
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
			// Output the value followed by an additional space
            std::cout << value << " ";
			// Add the remaining half of the spaces after the value
            for (int i = 0; i < (addSpace / 2); i++)
                std::cout << " ";
        }
    }
	// If the value is longer than 9 characters, truncate it and append a period
    if (addSpace < 0)
    {
		// Output the first 9 characters of the value
        for (int i = 0; i < 9; i++)
            std::cout << value[i];
        std::cout << ".";
    }
}

void PhoneBook::printData()
{
	// Assign the book array of contacts to a local pointer variable book
	Contact *book = this->book;
	for (int x = 0; x < this->nb_contact; x++) // Iterate over the contacts in the book array
	{
		// Print the index of the current contact with a vertical bar before and after it
		std::cout << "|" << x << "  | ";
		// Format and print the contact's first name
		formatString(book[x].getFirstName());
		std::cout << " | ";
		formatString(book[x].getLastName());
		std::cout << " | ";
		formatString(book[x].getNickname());
		// std::cout << " | ";
		// formatString(book[x].getPhoneNumber());
		// std::cout << " | ";
		// formatString(book[x].getDarkestSecret());
		// Print the closing separator for the current contact
		std::cout << "|" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
	}
}

// Method of the PhoneBook class to show information of a contact based on index
void PhoneBook::showInfo()
{
	std::string num; //string will hold the user's input as a string
	int valid = 0; //This will become 1 when a valid input is received

	if (std::cin.eof()) // Checks if the End-Of-File has been reached
	{
		std::cout << "\n";
	}
	// Loops until a valid input is received or the EOF is reached
	while (valid != 1 && !std::cin.eof())
	{
		//Prompts the user
		std::cout << "Please enter the index for the desired entry: ";
		std::cin >> num;
		int test = atoi(num.c_str()); // Converts the user's input to an integer
		// Checks if the index is out of bounds or the EOF is reached
		if ((test < 0 || test >= nb_contact) && !std::cin.eof())
			std::cout << "\033[31mERROR! \033[0m";
		else if (!std::cin.eof()) // if not reached EOF
		{
			book[test].printFullInfo();
			std::cout << std::endl << "Back to the main menu. Available commands: ADD, SEARCH or EXIT" << std::endl;
			valid = 1; //valid input was received
		}
	}
}

void PhoneBook::searchContact()
{
	if (nb_contact == 0)
		std::cout << "I'm sorry, but I am desperately empty! \n\tSigned \"your phonebook\"" << std::endl;
	else
	{
		printTabHead();
		printData();
		showInfo();
	}
}
