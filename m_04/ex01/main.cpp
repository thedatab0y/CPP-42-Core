#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// PART I

	int size = 2;
	Animal *array[size];
	for (int i = 0; i < size; i++)
	{
		if (i < (size / 2))	// Dogs
			array[i] = new Dog();
		else		// Cats
			array[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
		delete array[i];


	// PART II

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// 	std::cout << std::endl;
	// 	std::cout << "tmp   brain address -> 			" <<  tmp.getBrain() << std::endl;
	// }
	// {
	// 	std::cout << "end of scope" << std::endl;
	// 	std::cout << "basic brain address -> 			" << basic.getBrain() << std::endl;
	// 	std::cout << std::endl;
	// }
	
	// PART III

	// {
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// 	const Animal *j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;//should not create a leak
	// 	delete i;
	// }
	return 0;
}