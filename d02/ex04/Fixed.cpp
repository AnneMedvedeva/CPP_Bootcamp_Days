/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:41:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/04 20:41:05 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getFractionBitsNb( void ) {
	return (Fixed::_fractionBits);
}

int		Fixed::getRawBits( void ) const {
	return (this->_fixedPointVal);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointVal = raw;
}

Fixed::Fixed( void ): _fixedPointVal(0) {}

Fixed::~Fixed( void ) {}

Fixed::Fixed( Fixed const &cpy ) {
	*this = cpy;
}

void	Fixed::operator = (const Fixed &cpy) {
	this->_fixedPointVal = cpy._fixedPointVal;
}

Fixed::Fixed( int const &nbr ): _fixedPointVal(nbr << Fixed::_fractionBits) {}

Fixed::Fixed( float const &flt ): _fixedPointVal(roundf(flt * (1 << Fixed::_fractionBits))) {}

float	Fixed::toFloat( void ) const {
	float result = (float)(this->_fixedPointVal);
	result /= (1 << Fixed::_fractionBits);
	return (result);
}

int		Fixed::toInt( void ) const {
	return ((this->_fixedPointVal) >> Fixed::_fractionBits);
}

std::ostream	&operator << (std::ostream &o, const Fixed &cpy) {
	o << cpy.toFloat();
	return o;
}

Fixed			&Fixed::min(Fixed &a, Fixed &b) {
	return ((a < b) ? a : b);
}

Fixed const		&Fixed::min(Fixed const &a, Fixed const &b) {
	return ((a < b) ? a : b);
}

Fixed			&Fixed::max(Fixed &a, Fixed &b) {
	return ((a > b) ? a : b);
}

Fixed const		&Fixed::max(Fixed const &a, Fixed const &b) {
	return ((a > b) ? a : b);
}

bool			Fixed::operator > (const Fixed &cpy) const {
	return (this->getRawBits() > cpy.getRawBits());
}

bool			Fixed::operator < (const Fixed &cpy) const {
	return (this->getRawBits() < cpy.getRawBits());
}

bool			Fixed::operator >= (const Fixed &cpy) const {
	return (this->getRawBits() >= cpy.getRawBits());
}

bool			Fixed::operator <= (const Fixed &cpy) const {
	return (this->getRawBits() >= cpy.getRawBits());
}

bool			Fixed::operator == (const Fixed &cpy) const{
	return (this->getRawBits() == cpy.getRawBits());
}

bool			Fixed::operator != (const Fixed &cpy) const {
	return (this->getRawBits() != cpy.getRawBits());
}

Fixed			Fixed::operator + (const Fixed &cpy) const {
	return (Fixed(this->toFloat() + cpy.toFloat()));
}

Fixed			Fixed::operator - (const Fixed &cpy) const {
	return (Fixed(this->toFloat() - cpy.toFloat()));
}

Fixed			Fixed::operator * (const Fixed &cpy) const {
	return (Fixed(this->toFloat() * cpy.toFloat()));
}

Fixed			Fixed::operator / (const Fixed &cpy) const {
	return (Fixed(this->toFloat() / cpy.toFloat()));
}

Fixed			&Fixed::operator++(void) {
	this->_fixedPointVal++;
	return (*this);
}

Fixed			Fixed::operator++(int) {
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed			&Fixed::operator--(void) {
	this->_fixedPointVal--;
	return (*this);
}

Fixed			Fixed::operator--(int) {
	Fixed	temp = *this;
	--(*this);
	return (temp);
}
