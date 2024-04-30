#include "Form.hpp"

Form::Form( const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	// Constructor for the Form class.
	// Initializes the name, gradeToSign, and gradeToExecute member variables.
	// Throws a GradeTooHighException if either gradeToSign or gradeToExecute is less than 1.
	// Throws a GradeTooLowException if either gradeToSign or gradeToExecute is greater than 150.
}

Form::Form( const Form& src) : _name( src.getName() ), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {
	// Copy constructor for the Form class.
	// Initializes the name, gradeToSign, and gradeToExecute member variables with the values from the source object.
}

Form::~Form() {
	// Destructor for the Form class.
}

Form& Form::operator=(const Form& rhs) {
	// Assignment operator for the Form class.
	// Assigns the values of the signed member variable from the right-hand side object to the left-hand side object.
	// Returns a reference to the left-hand side object.
	if (this != &rhs)
		_signed = rhs.getSigned();
	return *this;
}

std::string Form::getName() const {
	// Getter function for the name member variable.
	// Returns the name of the form.
	return _name;
}

bool Form::getSigned() const {
	// Getter function for the signed member variable.
	// Returns true if the form is signed, false otherwise.
	return _signed;
}

int Form::getGradeToSign() const {
	// Getter function for the gradeToSign member variable.
	// Returns the minimum grade required to sign the form.
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	// Getter function for the gradeToExecute member variable.
	// Returns the minimum grade required to execute the form.
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	// Function to sign the form.
	// Checks if the bureaucrat's grade is lower than or equal to the gradeToSign.
	// If the grade is higher, throws a GradeTooLowException.
	// Otherwise, sets the signed member variable to true.
	if (bureaucrat.getGrade() > _gradeToSign) {
		throw Form::GradeTooLowException();
	}
	_signed = true;
}

std::ostream& operator<<(std::ostream &o, const Form& rhs) {
	// Overloaded stream insertion operator for the Form class.
	// Prints the information about the form to the output stream.
	o << "------------- Form Info ------------" << std::endl;
	o << "Form name: " << rhs.getName() << std::endl
	  << "Grade to sign: " << rhs.getGradeToSign() << std::endl
	  << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;;
	return o;
}
