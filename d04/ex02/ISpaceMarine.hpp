#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	ISpaceMarine
{
	public:

		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;

		virtual void	battleCry() const = 0;
		virtual void	rangedAttack() const = 0;
		virtual void	meleeAttack() const = 0;

};

#endif