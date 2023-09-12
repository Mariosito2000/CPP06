#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <sys/time.h>
#include <iostream>

Base *	generate(void)
{
	timeval	time;
	gettimeofday(&time, NULL);
	if (time.tv_usec % 3 == 0)
		return (new A);
	if (time.tv_usec % 3 == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	A	*a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "It's A!! (ARTICUNO)\n";
		return;
	}

	B	*b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "It's B!! (BULBASAUR)\n";
		return;
	}

	C	*c = dynamic_cast<C *>(p);
	if (c != NULL)
	{
		std::cout << "It's C!! (CHARMANDER)\n";
		return;
	}
}

void	identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "It's A!! (ARIADOS)\n";
	}
	catch(std::bad_cast e)
	{
	}
	
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "It's B!! (BASTIODON)\n";
	}
	catch(std::bad_cast e)
	{
	}

	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "It's C!! (CATERPIE)\n";
	}
	catch(std::bad_cast e)
	{
	}
}