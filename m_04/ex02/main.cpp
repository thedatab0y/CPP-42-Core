#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal test;
	Animal	*animals[4];// Array of Animal pointers to store different animals

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0) // Creating a new Dog object and storing its pointer in animals[i]
			animals[i] = new Dog(), std::cout << std::endl;
		else // Creating a new Cat object and storing its pointer in animals[i]
			animals[i] = new Cat(), std::cout << std::endl;
	}
	// Calling the makeSound() function of each animal
	for(int i = 0; i < 4; i++)
		animals[i]->makeSound(), std::cout << std::endl;

	for(int i = 0; i < 4; i++) // Deleting each animal object to free memory
		delete animals[i], std::cout << std::endl;

	return 0;
}