#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
	public:
		void init();
		void printFullInfo();

		void setFirstName(std::string name);
		std::string getFirstName();
		void setLastName(std::string name);
		std::string getLastName();
		void setNickname(std::string name);
		std::string getNickname();
		void setPhoneNumber(std::string name);
		std::string getPhoneNumber();
		void setDarkestSecret(std::string name);
		std::string getDarkestSecret();
	
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
