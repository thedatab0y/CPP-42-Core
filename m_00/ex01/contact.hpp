#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
	
	Contact(void);
	~Contact(void);
	void create(void);
	void show();

	private:
		std::string secret;
};

#endif
