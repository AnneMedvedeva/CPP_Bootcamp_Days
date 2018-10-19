#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class AMateria;

class	IMateriaSource
{

	public:

			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif