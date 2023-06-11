#include "Fixed.hpp"

int main()
{
    Fixed a; //default constructor
    Fixed const b( 10 ); //constructor called with value 10, creating const obj b
    Fixed const c( 42.42f ); //craeting const obj
    Fixed const d( b );//copy constructor called, craeting a const obj d with same val as b
    a = Fixed( 1234.4321f );//asigment operator called, assigning a new val to a
    //Fixed g;
    std::cout << "a is " << a << std::endl; //outputs a new value of a
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

	//outputs int representation of 'a'
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
}