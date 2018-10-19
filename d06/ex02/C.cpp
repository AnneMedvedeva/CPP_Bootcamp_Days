#include "C.hpp"

C::C(void)
{
	return;
}

C::C(C &obj)
{
	*this = obj;
	return;
}

C::~C(void)
{
	return;
}

C &C::operator=(C const &r) 
{
	(void)r;
	return (*this);
}
