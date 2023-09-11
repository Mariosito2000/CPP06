#include "ScalarConverter.hpp"
#include <iostream>

/*---CONS/DES---*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
	(void)a;
}

/*---MEMBER FUNCTIONS---*/

void	ScalarConverter::converter(std::string	str)
{
	int	indet = checkIndetermination(str);
	if (indet)
	{
		manageIndet(indet);
		return;
	}
	int	type = getType(str);
	switch (type)
	{
	case 0:
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
		break;
	case 1:
	//std::cout << "Char\n";
		manageChar(str);
		break;
	case 2:
	//std::cout << "Int\n";
		manageInt(str);
		break;
	case 3:
	//std::cout << "Float\n";
		manageFloat(str);
		break;
	case 4:
	//std::cout << "Double\n";
		manageDouble(str);
		break;
	}
}

/*---OPERATORS---*/

ScalarConverter & ScalarConverter::operator = (const ScalarConverter &a)
{
	(void)a;
	return (*this);
}
