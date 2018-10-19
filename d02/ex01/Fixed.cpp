/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:37:55 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/04 20:37:56 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &input)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = input;
	return;
}

Fixed::Fixed(int const input)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(input << this->_num);
	return;
}

Fixed::Fixed(float const input)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(input * (1 << this->_num)));
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(Fixed const &r)
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &r)
		this->_value = r.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_num);
}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << this->_num));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &r)
{
	o << r.toFloat();
	return (o);
}


int	const	Fixed::_num = 8;
