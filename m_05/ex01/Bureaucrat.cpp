
#include "Bureaucrat.hpp"

// this lines bring the cout and endl symbols into the current scope from std namespace.
using std::cout;
using std::endl;

// defination of default constructor for Bureaucrat class
Bureaucrat::Bureaucrat(void)
{
    cout << "'Bureaucrat' default constructor called" << endl;
};

// defination of copy constructor for bureaucrat class
Bureaucrat::Bureaucrat(const Bureaucrat& to_copy)
{
    //check if currect instance is not the same as one being copied
    if (this != &to_copy)
        *this = to_copy;// copy contents of 'to_copy' to current instance
    cout << "'Bureaucrat' <" << this->getName() << ">copy constructor called" << endl;
}

//Parameterized constructor for Bureaucrat class
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    // check if provided 'grade' is too high or too low and throw exceptions accordingly
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade; // assigh the 'grade' to currect instance
    cout << "'Bureaucrat' <" << this->getName() << "> constructor called" << endl;
};

//assigment operator overload for Bureaucrat class
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &original)
{
    const_cast<std::string&>(this->name) = original.name; // copy 'name' from 'original' to the currect instance.
    this->grade = original.grade; //copy 'grade' from 'original' to currect instance
    cout << "'Bureaucrat' <" << this->getName() << "> copy assigment operator called" << endl;
    return *this; //return a reference to currect instance.
}

//destructor for BUreaucrat class
Bureaucrat::~Bureaucrat(void)
{
    cout << "'Bureaucrat' <" << this->getName() << "> default destructor called" << endl;
};

//getter method to retrieve the 'name' of Bureaucrat
const std::string& Bureaucrat::getName(void) const 
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

//setter method to set the 'grade' of Bureaucrat
void Bureaucrat::setGrade(int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = grade; // set 'grade' to provided value
}

//method to increment the 'grade' of Bureaucrat
void Bureaucrat::incrementGrade()
{
    //check if incrementing grade would make it too high and throw an exception
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade -= 1; //decrement the 'grade' by 1
}

//method to decrement the 'grade' of Bureaucrat
void Bureaucrat::decrementGrade(void)
{
    //check if decrementing grade would make it too low and throw an exception
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade += 1; // increment the 'grade by 1
}

//defination of 'what' method for GradeTooHighException class
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat exception: grade too high!";
}

//defination of 'what' method for the GradeTooLowException class
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat exception: grade too low!";
}

// Overloaded output stream operator for Bureaucrat class
std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bureaucrat)
{
    stream << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return stream;
}