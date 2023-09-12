#include "Data.hpp"

/*---CONS/DES---*/

Data::Data()
{
	_value = 0;
	_phrase = "Hellos world!";
}

Data::~Data()
{
}

Data::Data(const Data &a)
{
	_value = a._value;
	_phrase = a._phrase;
}

/*---MEMBER FUNCTIONS---*/

/*---OPERATORS---*/

Data & Data::operator = (const Data &a)
{
	_phrase = a._phrase;
	_value = a._value;
	return(*this);
}