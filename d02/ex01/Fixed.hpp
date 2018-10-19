/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:38:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/04 20:38:05 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>

class	Fixed 
{

	public:

		Fixed(void);
		Fixed(Fixed const &input);
		Fixed(int const input);
		Fixed(float const input);
		~Fixed(void);

		Fixed	&operator=(Fixed const &r);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;


	private:

		int					_value;
		static	int	const	_num;


}; 

std::ostream	&operator<<(std::ostream &o, Fixed const &r);

#endif
