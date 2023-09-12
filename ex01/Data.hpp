#pragma once
#ifndef DATA_HPP
# define DATA_HPP

#include <string>

struct Data
{

public:

	int			_value;
	std::string	_phrase;

/*---CONS/DES---*/

	Data();
	~Data();

	Data(const Data &);

/*---MEMBER FUNCTIONS---*/

/*---OPERATORS---*/

	Data & operator = (const Data &);

};

#endif