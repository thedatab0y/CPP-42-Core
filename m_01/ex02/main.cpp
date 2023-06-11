#include <iostream>

int main()
{
	//declaring string var and init it with the value
	std::string string = "HI THIS IS BRAIN";
	//dec ptr var 'stringPTR' and assigning the & of the string
	std::string *stringPTR = &string;
	//dec a ref var stringREF and init it with the string
	std::string &stringREF = string;

	//printing the mem address  of string
	std::cout << &string << std::endl;
	//printing the mem address of 'string'
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	//printing the val of 'string'
	std::cout << string << std::endl;
	//printing the val of 'string'
	std::cout << *stringPTR << std::endl;
	//printing the val of 'string'
	std::cout << stringREF << std::endl;

	return 0;
}