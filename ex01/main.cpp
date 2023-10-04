#include "Serializer.hpp"
#include "Data.hpp"

#include <iostream>

int	main()
{
	uintptr_t	raw;
	Data	* ptr = new Data;

	std::cout << "PTR: " << ptr << "\n";

	raw = Serializer::serialize(ptr);
	ptr->_phrase = "Adieu";

	std::cout << "Original -> " << ptr->_phrase << "\n\n";

	Data	* result = Serializer::deserialize(raw);
	std::cout << "RESULT PTR: " << result << "\n";

	std::cout << "Result -> " << result->_phrase << "\n";
	return (0);
}