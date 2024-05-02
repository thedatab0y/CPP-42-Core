#include "ShrubberyCreationForm.hpp"

// Constructor that initializes the ShrubberyCreationForm object with a target
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form ("ShubberyCreationForm", 145, 137) , _target(target) {}

// Copy constructor that creates a new ShrubberyCreationForm object by copying the contents of another ShrubberyCreationForm object
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& src) : Form (src), _target(src._target) {}

// Destructor that cleans up any resources used by the ShrubberyCreationForm object
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Assignment operator that assigns the values of one ShrubberyCreationForm object to another ShrubberyCreationForm object
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& rhs) {
	(void)rhs;
	return *this;
}

// Executes the ShrubberyCreationForm by creating a file with a tree-shaped ASCII art based on the form's name and the target
void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	// Check if the form is signed
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	// Check if the executor's grade is too low to execute the form
	else if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	}

	// Create a file with the name of the form and "_shrubbery" extension
	std::ofstream file(this->getName() + "_shrubbery");
	// Write the tree-shaped ASCII art to the file
	file << "                      ___" << std::endl;
	file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	file << "             ,-'          __,,-- \\" << std::endl;
	file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
	file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	file << "     (     ,-'                  `." << std::endl;
	file << "      `._,'     _   _             ;" << std::endl;
	file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
	file << "                \"Hb HH dF" << std::endl;
	file << "                 \"HbHHdF" << std::endl;
	file << "                  |HHHF" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  dHHHb" << std::endl;
	file << "                .dFd|bHb.               o" << std::endl;
	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
	file << "##########################################" << std::endl;
	file.close();
}