#ifndef POWERFIST_H
# define POWERFIST_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{

	public:

		PowerFist(void);
		PowerFist(PowerFist &obj);
		virtual ~PowerFist(void);
		PowerFist &operator=(PowerFist const &r);

		void	attack(void) const;

};

#endif