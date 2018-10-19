/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:04:25 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:04:26 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		Weapon*  weapon;
		std::string	name;
	public:
		HumanA(std::string name);
		HumanA(std::string name, Weapon &weapon);
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
