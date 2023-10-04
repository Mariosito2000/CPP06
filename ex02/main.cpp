#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

int	main()
{
	Base * hola = generate();

	std::cout << "PTR\n";
	identify(hola);
	std::cout << "\nREF\n";
	identify(*hola);
}