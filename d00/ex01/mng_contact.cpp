#include <iostream>
#include <string>
#include "mng_contact.hpp"

Data::Data(void) 
{
	return;
}

Data::~Data(void) 
{
	return;
}

void	Data::add_data(std::string input, int i) 
{
	if (i == 0)
		this->_firstname = input;
	else if (i == 1)
		this->_lastname = input;
	else if (i == 2)
		this->_nickname = input;
	else if (i == 3)
		this->_login = input;
	else if (i == 4)
		this->_address = input;
	else if (i == 5)
		this->_email = input;
	else if (i == 6)
		this->_phone = input;
	else if (i == 7)
		this->_birthday = input;
	else if (i == 8)
		this->_meal = input;
	else if (i == 9)
		this->_panties = input;
	else if (i == 10)
		this->_secret = input;
}

std::string	Data::get_data(int i)  const
{
	if (i == 0)
		return (this->_firstname);
	else if (i == 1)
		return (this->_lastname);
	else if (i == 2)
		return (this->_nickname);
	else if (i == 3)
		return (this->_login);
	else if (i == 4)
		return (this->_address);
	else if (i == 5)
		return (this->_email);
	else if (i == 6)
		return (this->_phone);
	else if (i == 7)
		return (this->_birthday);
	else if (i == 8)
		return (this->_meal);
	else if (i == 9)
		return (this->_panties);
	else if (i == 10)
		return (this->_secret);
	return ("ERROR");
}