#include "B.hpp"

B::B(void)
{
	return;
}

B::B(B &obj)
{
	*this = obj;
	return;
}

B::~B(void)
{
	return;
}

B &B::operator=(B const &r) 
{
	(void)r;
	return (*this);
}
