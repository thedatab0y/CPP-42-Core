#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>  // for cout
#include <string>    // for string


class HumanA
{
	public:
		void attack()const;
		// Constructor declaration that takes 2 parameters
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
	private:
		std::string name;
		//var of type "reference to Weapon" called "weapon"
		Weapon& weapon;
		
};

#endif