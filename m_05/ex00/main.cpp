#include "Bureaucrat.hpp"

int main() {
    try {
        // Create a bureaucrat with a valid grade
        Bureaucrat john("John Doe", 50);

        // Display the bureaucrat's information
        std::cout << john << std::endl;

        // Try to increment the grade (should work)
        john.incrementGrade();
        std::cout << "After increment: " << john << std::endl;

        // Try to decrement the grade (should work)
        john.decrementGrade();
        std::cout << "After decrement: " << john << std::endl;

        // Try to decrement the grade beyond the lowest allowed grade (should throw GradeTooLowException)
        john.decrementGrade();
    }
	catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Caught GradeTooHighException: " << e.what() << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Caught GradeTooLowException: " << e.what() << std::endl;
    }
	catch (const std::exception& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}