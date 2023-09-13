#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

class Bureaucrat {
	public:
		Bureaucrat(void); // Default constructor
		Bureaucrat(const Bureaucrat& to_copy); // Copy constructor
		Bureaucrat(std::string name, int grade); // Parameterized constructor
		Bureaucrat &operator=(const Bureaucrat &original); // Assignment operator
		~Bureaucrat(void); // Destructor

		const std::string& getName(void) const; // Getter for name
		int getGrade(void) const; // Getter for grade

		void setGrade(int grade); // Setter for grade

		void incrementGrade(void); // Increment the grade
		void decrementGrade(void); // Decrement the grade

		class GradeTooHighException : public std::exception // Custom exception for high grade
		{
			public:
				virtual const char* what() const throw(); // Exception description
		};
		class GradeTooLowException : public std::exception // Custom exception for low grade
		{
			public:
				virtual const char* what() const throw(); // Exception description
		};

	private:
		const std::string name; // Name of the bureaucrat (constant)
		int grade; // Grade of the bureaucrat
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bureaucrat); // Overloaded << operator for printing

#endif
