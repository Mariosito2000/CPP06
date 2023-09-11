#include "ScalarConverter.hpp"
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (1);
	}
	ScalarConverter::converter((std::string)argv[1]);
	return (0);
}