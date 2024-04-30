#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
private:
	const std::string _name; // The name of the form
	bool _signed; // Indicates whether the form is signed or not
	const int _gradeToSign; // The minimum grade required to sign the form
	const int _gradeToExecute; // The minimum grade required to execute the form

	Form(); // Private default constructor to prevent instantiation without parameters

public:
	Form(const std::string& name, int gradeToSign, int gradeToExecute); // Constructor with parameters to initialize the form
	Form(const Form& src); // Copy constructor
	virtual ~Form(); // Virtual destructor

	Form& operator=(const Form& rhs); // Assignment operator

	std::string getName() const; // Getter for the name of the form
	bool getSigned() const; // Getter for the signed status of the form
	int getGradeToSign() const; // Getter for the minimum grade required to sign the form
	int getGradeToExecute() const; // Getter for the minimum grade required to execute the form

	void beSigned(const Bureaucrat& bureaucrat); // Method to sign the form

	virtual void execute(const Bureaucrat& executor) const = 0; // Pure virtual method to execute the form

	class GradeTooHighException : public std::exception { // Exception class for when the grade is too high
	public:
		virtual const char* what() const throw() { return "Grade too high"; }
	};

	class GradeTooLowException : public std::exception { // Exception class for when the grade is too low
	public:
		virtual const char* what() const throw() { return "Grade too low"; }
	};

	class NotSignedException : public std::exception { // Exception class for when the form is not signed
	public:
		virtual const char* what() const throw() { return "Form not signed"; }
	};
};

std::ostream& operator<<(std::ostream& o, const Form& rhs); // Overloaded stream insertion operator for printing the form

#endif
