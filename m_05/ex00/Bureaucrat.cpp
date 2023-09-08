
#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& _name, int _grade) : name(_name) {
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    grade = _grade;
}

// Destructor
Bureaucrat::~Bureaucrat() {
    // Destructor code, if needed
}

// Getter for name
std::string Bureaucrat::getName() const {
    return name;
}

// Getter for grade
int Bureaucrat::getGrade() const {
    return grade;
}

// Increment grade
void Bureaucrat::incrementGrade() {
    if (grade > 1) {
        grade--;
    } else {
        throw GradeTooHighException();
    }
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    if (grade < 150) {
        grade++;
    } else {
        throw GradeTooLowException();
    }
}

// Definition of GradeTooHighException
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

// Definition of GradeTooLowException
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Overloading the insertion operator to print Bureaucrat information
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
