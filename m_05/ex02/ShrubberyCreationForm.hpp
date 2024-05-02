#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp" // Include the header file for the base class Form

#include <fstream> // Include the header file for file stream operations

class ShrubberyCreationForm : public Form { // Declare a class named ShrubberyCreationForm which inherits from the base class Form

private:
	const std::string _target; // Declare a private member variable named _target of type std::string

	ShrubberyCreationForm(); // Declare a private default constructor

public:
	ShrubberyCreationForm(const std::string& target); // Declare a public constructor that takes a const reference to a std::string as a parameter
	ShrubberyCreationForm(const ShrubberyCreationForm& src); // Declare a public copy constructor that takes a const reference to a ShrubberyCreationForm object as a parameter
	~ShrubberyCreationForm(); // Declare a public destructor

	ShrubberyCreationForm& operator=(ShrubberyCreationForm& rhs); // Declare a public assignment operator that takes a reference to a ShrubberyCreationForm object as a parameter

	void execute(const Bureaucrat& executor) const; // Declare a public member function named execute that takes a const reference to a Bureaucrat object as a parameter and returns void
};

#endif
