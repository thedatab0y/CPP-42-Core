#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
	public:
		PhoneBook();
		void welcomeMessage();
		void Add();
		void searchContact();
		void printData();
		void showInfo();
	private:
		Contact book[8];
		int		nb_contact;
};

#endif