#include <string>
#include <iostream>
#include <limits>
#include <cmath>

void	manageChar(const std::string &str)
{
	std::cout << "char: ";
	if (std::isprint(str[0]))
		std::cout << "'" << str[0] << "'\n";
	else
		std::cout << "Non displayable\n";

	std::cout << "int: ";
		std::cout << static_cast<int>(str[0]) << "\n";

	std::cout << "float: ";
		std::cout << static_cast<float>(str[0]) << ".0f\n";

	std::cout << "double: ";
		std::cout << static_cast<double>(str[0]) << ".0\n";
}

void	manageInt(const	std::string &str)
{
	int	value = static_cast<int>(std::atoi(str.c_str()));

	std::cout << "char: ";
	if (std::isprint(value))
		std::cout << "'" << static_cast<char>(value) << "'\n";
	else
		std::cout << "Non displayable\n";

	std::cout << "int: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<int>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<int>::min())
		std::cout << "Out of bounds\n";
	else	
		std::cout << value << "\n";

	std::cout << "float: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<float>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<float>::max()
		|| (std::numeric_limits<float>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<float>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<int>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<int>::min())
		std::cout << "Can't convert from an under/overflown int\n";
	else
		std::cout << static_cast<float>(value) << ".0f\n";

	std::cout << "double: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<double>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<double>::max()
		|| (std::numeric_limits<double>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<double>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<int>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<int>::min())
		std::cout << "Can't convert from an under/overflown int\n";
	else
		std::cout << static_cast<double>(value) << ".0\n";
}

void	manageFloat(const std::string &str)
{
	float value = static_cast<float>(std::atof(str.c_str()));
	int	i = static_cast<int>(value);
	double d = static_cast<double>(value);

	std::cout << "char: ";
	if (std::isprint(i))
		std::cout << "'" << static_cast<char>(i) << "'\n";
	else
		std::cout << "Non displayable\n";

	std::cout << "int: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<int>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<int>::min())
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<float>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<float>::max()
		|| (std::numeric_limits<float>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<float>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Can't convert from an under/overflown float\n";
	else
		std::cout << i << "\n";

	std::cout << "float: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<float>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<float>::max()
		|| (std::numeric_limits<float>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<float>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else
	{
		if (fabs(value - i) <= 0.000005)
			std::cout << value << ".0f\n";
		else
			std::cout << value << "f\n";
	}

	std::cout << "double: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<double>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<double>::max()
		|| (std::numeric_limits<double>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<double>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<float>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<float>::max()
		|| (std::numeric_limits<float>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<float>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Can't convert from an under/overflown float\n";
	else
	{
		if (fabs(d - i) <= 0.000005)
			std::cout << d << ".0\n";
		else
			std::cout << d << "\n";
	}
}

void	manageDouble(const std::string &str)
{
	double value = static_cast<double>(std::atof(str.c_str()));
	int	i = static_cast<int>(value);
	float f = static_cast<float>(value);

	std::cout << "char: ";
	if (std::isprint(i))
		std::cout << "'" << static_cast<char>(i) << "'\n";
	else
		std::cout << "Non displayable\n";

	std::cout << "int: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<int>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<int>::max())
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<double>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<double>::max()
		|| (std::numeric_limits<double>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<double>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Can't convert from an under/overflown double\n";
	else
		std::cout << i << "\n";

	std::cout << "float: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<float>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<float>::max()
		|| (std::numeric_limits<float>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<float>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<double>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<double>::max()
		|| (std::numeric_limits<double>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<double>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Can't convert from an under/overflown double\n";
	else
	{
		if (fabs(f - i) <= 0.000005)
			std::cout << f << ".0f\n";
		else
			std::cout << f << "f\n";
	}

	std::cout << "double: ";
	if (static_cast<long double>(std::atof(str.c_str())) > std::numeric_limits<double>::max()
		|| static_cast<long double>(std::atof(str.c_str())) < -std::numeric_limits<double>::max()
		|| (std::numeric_limits<double>::min() > static_cast<long double>(std::atof(str.c_str()))
		&& -static_cast<long double>(std::atof(str.c_str())) < std::numeric_limits<double>::min()
		&& static_cast<long double>(std::atof(str.c_str())) != 0))
		std::cout << "Out of bounds\n";
	else
	{
		if (fabs(value - i) <= 0.000005)
			std::cout << value << ".0\n";
		else
			std::cout << value << "\n";
	}
}

void	manageIndet(int indet)
{
	std::cout << "char: impossible\nint: impossible\n";
	if (indet == -1)
		std::cout << "float: -inff\ndouble: -inf\n";
	else if (indet == 1)
		std::cout << "float: +inff\ndouble: +inf\n";
	else if (indet == 5)
		std::cout << "float: nanf\ndouble: nan\n";
}