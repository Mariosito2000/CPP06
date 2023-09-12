#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

int	main()
{
	Base * hola = generate();
	identify(hola);
	identify(*hola);
}