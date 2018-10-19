#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Enemy.hpp"

class	SuperMutant : public Enemy
{

	public:

		SuperMutant(void);
		SuperMutant(SuperMutant &obj);
		virtual ~SuperMutant(void);
		SuperMutant &operator=(SuperMutant const &r);

		virtual void		takeDamage(int damage);

};

#endif