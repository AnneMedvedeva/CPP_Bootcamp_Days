#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	AWeapon
{

	public:

		AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon &obj);
		virtual ~AWeapon(void);
		AWeapon &operator=(AWeapon const &r);

		virtual void	attack() const = 0;

		std::string		getName() const;
		int				getDamage() const;
		int				getAPCost() const;

	private:
		std::string		_name;
		int				_dmg;
		int				_ap;

};

#endif