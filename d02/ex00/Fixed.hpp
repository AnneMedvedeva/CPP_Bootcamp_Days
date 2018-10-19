/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:37:35 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/04 20:37:38 by amedvedi         ###   ########.fr       */
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

class	Fixed 
{

	public:

		Fixed(void);
		Fixed(Fixed const &input);
		~Fixed(void);

		Fixed	&operator=(Fixed const &r);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);


	private:

		int					_value;
		static	int	const	_num;


}; 

#endif
