#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string _target; // The target for the robotomy request

	RobotomyRequestForm(); // Private default constructor to prevent instantiation without target

public:
	RobotomyRequestForm(const std::string& target); // Constructor that takes a target as parameter
	RobotomyRequestForm(const RobotomyRequestForm& src); // Copy constructor
	~RobotomyRequestForm(); // Destructor

	RobotomyRequestForm& operator=(RobotomyRequestForm& rhs); // Assignment operator

	void execute(const Bureaucrat& execute) const; // Execute the robotomy request
};

#endif