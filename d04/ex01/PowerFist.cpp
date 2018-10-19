#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist &obj) : AWeapon(obj)
{
	*this = obj;
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist &PowerFist::operator=(PowerFist const &r) 
{
	AWeapon::operator=(r);
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}