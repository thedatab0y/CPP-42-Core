#include "Fixed.hpp"

int main()
{
	Fixed a; // creating Fixed obj 'a' with default constractor
	Fixed b(a);//obj creation by coping the val of 'a'  with copy constr
	Fixed c;//creating obj 'c' with default constructor
	c = b;
	//outputs the raw bits of 'a'
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}
