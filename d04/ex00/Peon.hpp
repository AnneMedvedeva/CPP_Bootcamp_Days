#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Victim.hpp"

class	Peon : public Victim
{

	public:

		Peon(void);
		Peon(std::string name);
		Peon(Peon &obj);
		virtual ~Peon(void);
		Peon &operator=(Peon const &r);

		void	getPolymorphed(void) const;

		std::string		getName(void) const;

};

std::ostream	&operator<<(std::ostream &o, Peon const &r); 

#endif