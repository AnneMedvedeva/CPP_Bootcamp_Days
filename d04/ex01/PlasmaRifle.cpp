#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &obj) : AWeapon(obj)
{
	*this = obj;
	return;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &r) 
{
	AWeapon::operator=(r);
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}