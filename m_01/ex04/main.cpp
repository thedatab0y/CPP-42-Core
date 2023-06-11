#include <iostream>
#include <fstream>

int main(int argv, char **args)
{
	if (argv == 4)
	{
		// Get the input file name from command line arguments
		std::string myiofile = args[1];
		// Open the input file
		std::ifstream myinputfile(myiofile);
	
		if (myinputfile.is_open())
		{
			std::string myline;
			// Read the entire file content into myline
			if (std::getline(myinputfile, myline, '\0'))
			{
				// Gets the first str to replace
				std::string s1 = args[2];
				// Gets the second string to replace
				std::string s2 = args[3];
				// Creates the output file name by adding ".replace" 
				std::string outpufile = myiofile + ".replace";
				std::ofstream myoutput(outpufile);// Open the output file
				// Find the position of the first occurrence of s1 in myline
				size_t pos = myline.find(s1);

				while (pos != std::string::npos)
				{
					myline.erase(pos, s1.length());// Remove s1 from myline
					myline.insert(pos,s2);// Insert s2 at the position of the removed s1
					pos = myline.find(s1);// Find the next occurrence of s1 in myline
				}
				myoutput << myline;// Write the modified myline to the output file
				myoutput.close();// Close the output file
			}
			else
				std::cout << "File Empty" << std::endl;
			myinputfile.close();
		}
		else
			std::cout << "File not opened" << std::endl;
	}
	else
		std::cerr << "Wrong arg number just 3 arguments (File no, s1, s2)" << std::endl;
	return 1; //successful execution
}