#pragma once
#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:

/*---CONS/DES---*/

	virtual	~Base();

};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif