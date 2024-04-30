#include "Bureaucrat.hpp"

// Constructor that initializes the Bureaucrat object with a name and grade.
// Throws an exception if the grade is less than 1 or greater than 150.
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

// Copy constructor that creates a new Bureaucrat object by copying the values from another Bureaucrat object.
Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {
}

// Destructor for the Bureaucrat object.
Bureaucrat::~Bureaucrat() {
}

// Assignment operator that assigns the values of another Bureaucrat object to the current object.
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this != &rhs)
        _grade = rhs._grade;
    return *this;
}

// Getter function that returns the name of the Bureaucrat.
std::string Bureaucrat::getName() const {
    return _name;
}

// Getter function that returns the grade of the Bureaucrat.
int Bureaucrat::getGrade() const {
    return _grade;
}

// Function that increments the grade of the Bureaucrat by 1.
// Throws an exception if the resulting grade is less than 1.
void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

// Function that decrements the grade of the Bureaucrat by 1.
// Throws an exception if the resulting grade is greater than 150.
void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

// Function that signs a Form by calling its beSigned() function.
// Prints a message indicating whether the signing was successful or not.
void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form.getName() << std::endl;
    } catch (Form::GradeTooLowException& e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

// Function that executes a Form by calling its execute() function.
// Prints a message indicating whether the execution was successful or not.
void Bureaucrat::executeForm(const Form& form) const {
    try {
        form.execute(*this);
    } catch (std::exception& e) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

// Overloaded stream insertion operator that allows printing a Bureaucrat object to an output stream.
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}