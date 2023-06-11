#include "Fixed.hpp"
    
int main( void ) 
{ 
	Fixed a;//declaring a var 'a' of type 'Fixed' with default constructor
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );//'b' is made by multipling 2 objects
    std::cout << b << std::endl;//print the value of 'b'
    std::cout << a << std::endl;
	//  Increment the value of 'a' and print the updated
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
	// Print the value of 'a' and then increment it
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
	//find the min val in a and b, using min from Fixed class and print
    std::cout << Fixed::min( a, b ) << std::endl;
	//multiply 2 Fixed objects from float values
    std::cout << Fixed(0.89f) * Fixed(4.33f) << std::endl;
	//devide 2 Fixed objects from integer
    std::cout << Fixed(1) / Fixed(3) << std::endl;

	return 0;
}