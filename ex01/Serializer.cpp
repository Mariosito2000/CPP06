#include "Serializer.hpp"
#include "Data.hpp"

/*---CONS/DES---*/

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer &a)
{
	(void)a;
}

/*---MEMBER FUNCTIONS---*/

uintptr_t 	Serializer::serialize(Data* ptr)
{
	uintptr_t	raw;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* 		Serializer::deserialize(uintptr_t raw)
{
	Data * ptr;
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

/*---OPERATORS---*/

Serializer & Serializer::operator = (const Serializer &a)
{
	(void)a;
	return (*this);
}