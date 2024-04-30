#include "PresidentialPardonForm.hpp"

// Constructor for the PresidentialPardonForm class
// Initializes the form with a target and sets the form's name, signing grade, and executing grade
PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

// Copy constructor for the PresidentialPardonForm class
// Creates a new instance of PresidentialPardonForm by copying the values from another instance
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src), _target(src._target) {}

// Destructor for the PresidentialPardonForm class
PresidentialPardonForm::~PresidentialPardonForm() {}

// Assignment operator for the PresidentialPardonForm class
// Assigns the values from another instance to the current instance
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	(void)rhs;
	return *this;
}

// Executes the PresidentialPardonForm
// Checks if the executor's grade is higher than the form's executing grade
// If the grade is too low, throws a GradeTooLowException
// Otherwise, prints a message indicating that the target has been pardoned
void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else {
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
