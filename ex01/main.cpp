#include "Serializer.hpp"
#include "Data.hpp"

#include <iostream>

int	main()
{
	uintptr_t	raw;
	Data	* ptr = new Data;
	raw = Serializer::serialize(ptr);
	ptr->_phrase = "Adieu";
	Data	* result = Serializer::deserialize(raw);
	std::cout << result->_phrase << "\n";
	return (0);
}