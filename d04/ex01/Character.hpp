#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{

	public:

		Character(void);
		Character(std::string const &name);
		Character(Character &obj);
		virtual ~Character(void);
		Character &operator=(Character const &r);

		void			recoverAP(void);
		void			equip(AWeapon*);
		void			attack(Enemy*);

		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon			*getWeapon(void) const;

	private:
		std::string		_name;
		AWeapon			*_weapon;
		int				_ap;

};

std::ostream				&operator<<(std::ostream &o, Character const &r);

#endif