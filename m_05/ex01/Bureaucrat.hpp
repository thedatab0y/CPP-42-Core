#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

	Bureaucrat(); //default constuctor

public:
	Bureaucrat( const std::string& name, int grade); // public constructor
	Bureaucrat( const Bureaucrat& src); // copy constructor
	~Bureaucrat(); // destructor

	Bureaucrat& operator=( const Bureaucrat& rhs); // assigment operator overloading

	std::string getName() const; // public member function to return the name of bureaucrat
	int getGrade() const; // returns the grade of bureaucrat

	void incrementGrade(); // increase the grade of the Bureaucrat
	void decrementGrade(); // decrease the grade of the Bureaucrat

	void        signForm( Form& form );
	
	// exception classes
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high";}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low";}
	};
};
// friend function that overloads the '<<' operator, allowing the objs of 'Bureaucrat' to be printed on output stream
std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs);

#endif
