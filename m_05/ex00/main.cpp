#include "Bureaucrat.hpp"


int main(void)
{
	std::cout << "OVERALL" << std::endl;
	{
		// Constructors
        // Create a bureaucrat with name "Ana" and grade 87.
		Bureaucrat	a("Stone", 87);
		// Copy Constructor
        // Create a bureaucrat "b" using the copy constructor.
		Bureaucrat	b(a);
		// Copy assignment
        // Create a bureaucrat "c" and copy the value of "b" into it using copy assignment.
		Bureaucrat	c = b;

		// ostream overload
        // Output the details of the bureaucrats.
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "TEST_1" << std::endl;
		try
		{
			// grade too low
            // Attempt to create a bureaucrat with a grade that is too low (greater than 150).
			Bureaucrat	a("A", 150 + 1);
            // Output the details of the bureaucrat.
			std::cout << a << std::endl;
		}
		catch (std::exception& e) {
            // Handle the exception and print the error message.
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST_2" << std::endl;
		try
		{
			// grade too high
			Bureaucrat	b("B", 1 - 1);
            // Output the details of the bureaucrat.
			std::cout << b << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST_3" << std::endl;
		try
		{
            Bureaucrat	c("C", 1);

            // Increment the grade of "c" to a value higher than HIGHEST_GRADE.
			c.incrementGrade();
            // Output the details of the bureaucrat.
			std::cout << c << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST_4" << std::endl;
		try
		{
            // Create a bureaucrat "d" with a grade of 150.
			Bureaucrat	d("D", 150);
            // Decrement the grade of "d" to a value lower than LOWEST_GRADE.
			d.decrementGrade();
            // Output the details of the bureaucrat.
			std::cout << d << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST_5" << std::endl;
		try 
		{
			// Acceptable grade changes
            // Create a bureaucrat "bek" with a grade of 20.
			Bureaucrat	bek("BEK", 20);
            // Decrement the grade of "bek" and then increment it.
			bek.decrementGrade();
			std::cout << bek << std::endl;
			bek.incrementGrade();
			std::cout << bek << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}