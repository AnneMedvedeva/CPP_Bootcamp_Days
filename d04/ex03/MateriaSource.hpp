#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{

	public:

		MateriaSource(void);
		MateriaSource(MateriaSource &obj);
		virtual ~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &r);

		void 		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);

	private:

		AMateria	*_mat[4];

};

#endif