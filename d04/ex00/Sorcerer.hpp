#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Victim.hpp"

class	Sorcerer
{

	public:

		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer &obj);
		virtual ~Sorcerer(void);
		Sorcerer &operator=(Sorcerer const &r);

		void	polymorph(Victim const &) const;

		std::string		getName() const;
		std::string		getTitle() const;

	private:
		std::string		_name;
		std::string		_title;

};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &r); 

#endif