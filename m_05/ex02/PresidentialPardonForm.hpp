#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form 
{
private:
	std::string _target; // The target of the presidential pardon

	PresidentialPardonForm(); // Private default constructor to prevent instantiation without target

public:
	PresidentialPardonForm(const std::string& target); // Constructor that takes a target as parameter
	PresidentialPardonForm(const PresidentialPardonForm& src); // Copy constructor
	~PresidentialPardonForm(); // Destructor

	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs); // Assignment operator

	void execute(const Bureaucrat& executor) const; // Executes the presidential pardon form

};

#endif