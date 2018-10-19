#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	Victim
{

	public:

		Victim(void);
		Victim(std::string name);
		Victim(Victim &obj);
		virtual ~Victim(void);
		Victim &operator=(Victim const &r);

		virtual void	getPolymorphed(void) const;

		std::string		getName(void) const;

	protected:
		std::string		_name;

};

std::ostream	&operator<<(std::ostream &o, Victim const &r); 

#endif