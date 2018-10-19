/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:41:09 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/04 20:41:11 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class	Fixed	{
	private:
		int					_fixedPointVal;

		//fraction bits number
		static const int	_fractionBits = 8;

	public:
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);

		static int			getFractionBitsNb( void );
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );

		//assign operator overloading
		void				operator = (const Fixed &cpy);

		//logic operators overloading
		bool				operator > (const Fixed &cpy) const;
		bool				operator < (const Fixed &cpy) const;
		bool				operator >= (const Fixed &cpy) const;
		bool				operator <= (const Fixed &cpy) const;
		bool				operator == (const Fixed &cpy) const;
		bool				operator != (const Fixed &cpy) const;

		//arythmetic operators overloading
		Fixed				operator + (const Fixed &cpy) const;
		Fixed				operator - (const Fixed &cpy) const;
		Fixed				operator * (const Fixed &cpy) const;
		Fixed				operator / (const Fixed &cpy) const;

		//increment operators overloading
		Fixed				&operator++(void);	// Prefix increment operator.  
   		Fixed				operator++(int);	// Postfix increment operator.
		
		Fixed				&operator--(void);	// Prefix decrement operator.
		Fixed				operator--(int);	// Postfix decrement operator.

		//default constructor
		Fixed( void );

		//copy constructror
		Fixed( Fixed const &cpy );

		//int -> Fixed(_fractionBits) constructor
		Fixed( int const &nbr );

		//float -> Fixed(_fractionBits) constructor
		Fixed( float const &flt );

		~Fixed( void );

		//returns float representation
		float				toFloat( void ) const;

		//returns int representation
		int					toInt( void ) const;
};

//streaming operator overloading
std::ostream				&operator << (std::ostream &o, const Fixed &cpy);
#endif
