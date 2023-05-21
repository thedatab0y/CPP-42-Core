#include <iostream>
#include <ctype.h>

void to_UpperCase(char *str)
{
	int x = 0;

	while (str[x])
	{
		str[x] = std::toupper(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	int x = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (x < ac)
		{
			to_UpperCase(av[x]);
			std::cout << av[x] << " ";
			//std::cout << av[x];
			x++;
		}
	}
	std::cout << std::endl;

	return (0); //positive exec
}
