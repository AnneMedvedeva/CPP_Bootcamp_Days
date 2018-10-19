#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ICharacter.hpp"

class	Ice : virtual public AMateria
{

	public:

		Ice(void);
		Ice(std::string const &type);
		Ice(Ice &obj);
		~Ice(void);
		Ice &operator=(Ice const &r);

		Ice*		clone(void) const;
		void			use(ICharacter& target);

};

#endif