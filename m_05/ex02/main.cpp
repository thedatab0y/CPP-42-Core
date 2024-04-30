#include  "Form.hpp" // Include the header file for the Form class.
#include "Bureaucrat.hpp" // Include the header file for the Bureaucrat class.
#include "ShrubberyCreationForm.hpp" // Include the header file for the ShrubberyCreationForm class.
#include "RobotomyRequestForm.hpp" // Include the header file for the RobotomyRequestForm class.
#include "PresidentialPardonForm.hpp" // Include the header file for the PresidentialPardonForm class.

int main( void )
{
	try {
		Bureaucrat bureaucrat("ash", 2); // Create a Bureaucrat object named "ash" with a grade of 2.
		ShrubberyCreationForm form1("Shrubbery"); // Create a ShrubberyCreationForm object named "form1" with a target of "Shrubbery".
		RobotomyRequestForm form2("Robotomy"); // Create a RobotomyRequestForm object named "form2" with a target of "Robotomy".
		PresidentialPardonForm form3("President"); // Create a PresidentialPardonForm object named "form3" with a target of "President".

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl; // Print a separator and the name of the current form.
		bureaucrat.signForm(form1); // Ask the bureaucrat to sign the form1.
		bureaucrat.executeForm(form1); // Ask the bureaucrat to execute the form1.
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl; // Print a separator and the name of the current form.
		bureaucrat.signForm(form2); // Ask the bureaucrat to sign the form2.
		bureaucrat.executeForm(form2); // Ask the bureaucrat to execute the form2.
		bureaucrat.executeForm(form2); // Ask the bureaucrat to execute the form2.
		bureaucrat.executeForm(form2); // Ask the bureaucrat to execute the form2.
		bureaucrat.executeForm(form2); // Ask the bureaucrat to execute the form2.
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl; // Print a separator and the name of the current form.
		bureaucrat.signForm(form3); // Ask the bureaucrat to sign the form3.
		bureaucrat.executeForm(form3); // Ask the bureaucrat to execute the form3.
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl; // Print the exception message if an exception occurs.
	}
	return EXIT_SUCCESS; // Return 0 to indicate successful execution of the program.
}
