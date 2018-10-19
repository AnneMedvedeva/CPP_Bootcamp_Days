#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion &obj) : Enemy(obj)
{
	*this = obj;
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &r) 
{
	Enemy::operator=(r);
	return (*this);
}
