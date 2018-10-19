#ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ICharacter.hpp"

class	Cure : public AMateria
{

	public:

		Cure(void);
		Cure(std::string const &type);
		Cure(Cure &obj);
		~Cure(void);
		Cure &operator=(Cure const &r);

		Cure*		clone(void) const;
		void			use(ICharacter& target);

};

#endif