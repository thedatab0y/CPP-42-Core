#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
//#include <stdexpect>

class Bureaucrat {

private: //private attributes for
	const std::string name;
	int grade;

public:
	Bureaucrat(const std::string& _name, int _grade);
	~Bureaucrat(); //destructor

	std::string getName() const; // Getter for the bureaucrat's grade
	int getGrade() const; // Getter for the bureaucrat's grade

	void incrementGrade();// Member function to increment the bureaucrat's grade
	void decrementGrade();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{//inheriting from exception class
	public:
		virtual const char* what() const throw();//returns string
	};
    // Friend function to overload the insertion operator for printing
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
};

#endif
