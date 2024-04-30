
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string   _name; // The name of the bureaucrat
    int                 _grade; // The grade of the bureaucrat

    Bureaucrat(); // Private default constructor to prevent instantiation without parameters

public:
    Bureaucrat( const std::string& name, int grade ); // Constructor that takes the name and grade of the bureaucrat
    Bureaucrat( const Bureaucrat& src ); // Copy constructor
    ~Bureaucrat(); // Destructor

    Bureaucrat  &operator=( const Bureaucrat& rhs ); // Assignment operator

    std::string getName() const; // Getter for the name of the bureaucrat
    int         getGrade() const; // Getter for the grade of the bureaucrat

    void        incrementGrade(); // Method to increment the grade of the bureaucrat
    void        decrementGrade(); // Method to decrement the grade of the bureaucrat

    void        signForm( Form& form ); // Method to sign a form

    void        executeForm( const Form& form ) const; // Method to execute a form

    /* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception { // Exception class for when the grade is too high
        public:
            virtual const char* what() const throw() { return "Grade too high"; } // Returns the exception message
    };
    class GradeTooLowException : public std::exception { // Exception class for when the grade is too low
        public:
            virtual const char* what() const throw() { return "Grade too low"; } // Returns the exception message
    };

};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs ); // Overloaded stream insertion operator for printing the bureaucrat

#endif