#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria(type)
{
	return;
}

Cure::Cure(Cure &obj)
{
	*this = obj;
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure &Cure::operator=(Cure const &r) 
{
	(void)r;
	return (*this);
}

Cure*	Cure::clone(void) const
{
	Cure 	*cure = new Cure("Cure");

	return (cure);
}

void		Cure::use(ICharacter &target)
{
	this->increaseXP();
	std::cout << "* heals " << target.getName() << "'s wounds' *" << std::endl;
}