#include "Bureaucrat.hpp"

// Constructor: takes a name and a grade, initializes the Bureaucrat object
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	// If the grade is too high/low, throw an exception
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Copy constructor: Creates a copy of a Bureaucrat object.
Bureaucrat::Bureaucrat (const Bureaucrat& src) : _name(src._name), _grade(src._grade) {

}

// DestructorL: cleans up resources when a Bureaucrat obj goes out of scope
Bureaucrat::~Bureaucrat(){

}

// Assigment operator: Assigns the values of one Bureaucrat obj to another.
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (this != &rhs)
		_grade = rhs.getGrade();
	return *this;
}

// Getter function for the name of the Bureaucrat
std::string Bureaucrat::getName() const {
	return _name;
}

// Getter function for the grade of the Bureaucrat
int Bureaucrat::getGrade() const {
	return _grade;
}

// Increment the grade of the Bureaucrat, throw an exception if goes too high
void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

//Sign a Form by calling its beSigned method, handle exceptions
void Bureaucrat::signForm(Form& form) {
	try {
		//try to sign form
		form.beSigned(*this);
		// print a success message
		std::cout << *this << " signed " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		//handle the exception by printing an error message.
		std::cout << _name << " could not sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

//Output stream operator overload for printing Bureaucrat obj 
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs) {
	//print the name and grade of Bureaucrat
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
