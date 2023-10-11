#include "Bureaucrat.hpp"

int main(void)
{
	try{
		Bureaucrat bureaucrat("steve", 1);

		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}