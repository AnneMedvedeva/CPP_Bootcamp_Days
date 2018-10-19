#include "A.hpp"

A::A(void)
{
	return;
}

A::A(A &obj)
{
	*this = obj;
	return;
}

A::~A(void)
{
	return;
}

A &A::operator=(A const &r) 
{
	(void)r;
	return (*this);
}
