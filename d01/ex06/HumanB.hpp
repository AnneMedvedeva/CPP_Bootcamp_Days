/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:04:41 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:04:42 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class   HumanB {
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		void    attack();
		void    setWeapon(Weapon & weapon);
};

#endif
