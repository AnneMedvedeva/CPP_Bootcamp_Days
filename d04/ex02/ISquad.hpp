#ifndef ISQUAD_H
# define ISQUAD_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ISpaceMarine.hpp"

class	ISquad
{
	public:

		virtual ~ISquad() {}

		virtual int				getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual int				push(ISpaceMarine*) = 0;

};

#endif