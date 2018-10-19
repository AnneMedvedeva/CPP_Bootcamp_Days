/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:04:59 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:05:01 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		void			setType(std::string type);
		const std::string	&	getType();
};

#endif
