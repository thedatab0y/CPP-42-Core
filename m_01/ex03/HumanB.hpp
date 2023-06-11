#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>  // for cout
#include <string>    // for string

class HumanB
{
	public:
		HumanB(std::string name);//constructor decl
		~HumanB();
		void attack()const;
		void setWeapon(Weapon& weapon);
	private:
		Weapon* weapon;//declaring the private member var of type ptr to Weapon called 'weapon' 
		std::string name;
};

#endif