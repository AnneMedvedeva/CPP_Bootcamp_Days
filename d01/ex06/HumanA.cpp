/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:02:57 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:03:36 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name){
	this->name = name;
}

HumanA::HumanA(std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::setWeapon(Weapon & weapon){
	this->weapon = &weapon;
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
