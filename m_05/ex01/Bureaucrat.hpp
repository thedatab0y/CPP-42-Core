#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form; // Forward declaration of the Form class

class Bureaucrat
{
    private:
        const std::string _name; // Private member variable to store the name of the bureaucrat
        int _grade; // Private member variable to store the grade of the bureaucrat

        Bureaucrat(); // Private default constructor

    public:
        Bureaucrat(const std::string& name, int grade); // Public constructor with name and grade parameters
        Bureaucrat(const Bureaucrat& src); // Copy constructor
        ~Bureaucrat(); // Destructor

        Bureaucrat& operator=(const Bureaucrat& rhs); // Assignment operator overload
        std::string getName() const; // Member function to get the name of the bureaucrat
        int getGrade() const; // Member function to get the grade of the bureaucrat

        void incrementGrade(); // Member function to increment the grade of the bureaucrat
        void decrementGrade(); // Member function to decrement the grade of the bureaucrat

        void signForm(Form& form); // Member function to sign a form

        // Exception Classes
        class GradeTooHighException : public std::exception { // Custom exception class for high grade
            public:
                virtual const char* what() const throw() { // Override what() function to provide error message
                    return "Grade too high";
                }
        };
        class GradeTooLowException : public std::exception { // Custom exception class for low grade
            public:
                virtual const char* what() const throw() { // Override what() function to provide error message
                    return "Grade too low";
                }
        };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs); // Overloaded operator for output stream

#endif