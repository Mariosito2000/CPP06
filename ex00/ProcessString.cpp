#include <string>
#include <iostream>

static int checkExceptions(const std::string & str)
{
	if (!std::isdigit(str[0]) && (str[0] != '-')) // Number contains an illegal char
		return (1);
	if (str[0] == '-' && static_cast<long double>(std::atof(str.c_str())) == 0) // Restrict -0
		return (1);
	if ((str.length() > 2 && str[0] == '-' && str[1] == '0' && std::isdigit(str[2])) // Restrict 00... & 0N...
		|| (str[0] == '0' && std::isdigit(str[1])))
		return (1);
	return (0);
}

static int	checkDot(const std::string & str, size_t i)
{
	
	if (!str[i + 1] || !std::isdigit(str[i + 1]))
		return (0);
	for (i++; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != 'f')
			return (0);
		if (str[i] == 'f' && std::isdigit(str[i - 1]))
			return (3);
	}
	return	(4);
}

int	getType(std::string str)
{
	if (str == "" || (str.length() == 1 && !std::isdigit(str[0])))
		return (1);
	if (str.length() == 1)
		return (2);
	if (checkExceptions(str))
		return (0);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '.') // Number contains an illegal char
			return (0);
		if (str[i] == '.')
			return (checkDot(str, i));
	}
	return (2);
}

int	checkIndetermination(std::string str)
{
	if (str == "-inf" || str == "-inff")
		return (-1);
	if (str == "+inf" || str == "+inff")
		return (1);
	if (str == "nan" || str == "nanf")
		return (5);
	return (0);
}