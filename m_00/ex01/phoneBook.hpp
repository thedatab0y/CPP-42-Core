#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact storage[8];
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void show(void);
};

#endif