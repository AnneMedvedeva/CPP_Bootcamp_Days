#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle &obj);
		virtual ~PlasmaRifle(void);
		PlasmaRifle &operator=(PlasmaRifle const &r);

		void	attack(void) const;

};

#endif