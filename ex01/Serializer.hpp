#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>

struct Data;

class Serializer
{
private:

/*---CONS/DES---*/

	Serializer();
	~Serializer();

	Serializer(const Serializer &);

public:

/*---MEMBER FUNCTIONS---*/

	static uintptr_t 	serialize(Data* ptr);
	static Data* 		deserialize(uintptr_t raw);

/*---OPERATORS---*/

	Serializer & operator = (const Serializer &);

};

#endif