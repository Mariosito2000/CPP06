#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCOVERTER_HPP

#include <string>

class ScalarConverter
{
private:

/*---CONS/DES---*/

	ScalarConverter();
	~ScalarConverter();

	ScalarConverter(const ScalarConverter &);

public:

/*---MEMBER FUNCTIONS---*/

	static void	converter(std::string);

/*---OPERATORS---*/

	ScalarConverter & operator = (const ScalarConverter &);

};

/*---GetType---*/

int		checkIndetermination(std::string str);
int		getType(std::string str);

/*---Output---*/

void	manageIndet(int indet);
void	manageChar(const std::string &str);
void	manageInt(const	std::string &str);
void	manageFloat(const std::string &str);
void	manageDouble(const std::string &str);

#endif