

#include "RobotomyRequestForm.hpp"

// Include the header file "RobotomyRequestForm.hpp" which contains the declaration of the RobotomyRequestForm class

// Constructor that initializes the RobotomyRequestForm object with a target
RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy request Form", 72, 45), _target(target) {}

// Define the constructor for the RobotomyRequestForm class. It takes a string parameter called "target".
// The constructor initializes the RobotomyRequestForm object by calling the constructor of the base class "Form" with the arguments "Robotomy request Form", 72, and 45.
// It also initializes the member variable "_target" with the value of the "target" parameter.

// Copy constructor that creates a new RobotomyRequestForm object by copying the contents of another RobotomyRequestForm object
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), _target(src._target) {}

// Define the copy constructor for the RobotomyRequestForm class. It takes a reference to another RobotomyRequestForm object called "src".
// The copy constructor initializes the new RobotomyRequestForm object by calling the copy constructor of the base class "Form" with the argument "src".
// It also initializes the member variable "_target" with the value of the "_target" member variable of the "src" object.

// Destructor that cleans up any resources used by the RobotomyRequestForm object
RobotomyRequestForm::~RobotomyRequestForm() {}

// Define the destructor for the RobotomyRequestForm class.
// The destructor is responsible for cleaning up any resources used by the RobotomyRequestForm object.
// In this case, since there are no explicit resources being managed, the destructor does not contain any specific cleanup code.

// Assignment operator that assigns the values of one RobotomyRequestForm object to another RobotomyRequestForm object
RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm& rhs) {
    (void)rhs;
    return *this;
} 

// Define the assignment operator for the RobotomyRequestForm class. It takes a reference to another RobotomyRequestForm object called "rhs".
// The assignment operator is responsible for assigning the values of one RobotomyRequestForm object to another RobotomyRequestForm object.
// In this case, the assignment operator does nothing and simply returns a reference to the current object.

// Executes the RobotomyRequestForm by checking if the executor's grade is high enough and performing a robotomy operation on the target
void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    else {
        static int i;
        if (i % 2 == 0)
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
        i++;
    }
}

// Define the execute function for the RobotomyRequestForm class. It takes a constant reference to a Bureaucrat object called "executor".
// The execute function is responsible for executing the RobotomyRequestForm by performing a robotomy operation on the target.
// It first checks if the executor's grade is higher than the grade required to execute the form. If not, it throws a GradeTooLowException.
// If the executor's grade is high enough, it performs the robotomy operation by printing a message indicating whether the operation was successful or not.
// The success or failure of the operation is determined by the value of the static variable "i", which is incremented each time the execute function is called.
// If "i" is even, the operation is considered successful and a success message is printed. Otherwise, a failure message is printed.
// The target of the robotomy operation is stored in the member variable "_target".