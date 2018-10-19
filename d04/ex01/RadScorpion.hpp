#ifndef RADSCORPION_H
# define RADSCORPION_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Enemy.hpp"

class	RadScorpion : public Enemy
{

	public:

		RadScorpion(void);
		RadScorpion(RadScorpion &obj);
		virtual ~RadScorpion(void);
		RadScorpion &operator=(RadScorpion const &r);

};

#endif