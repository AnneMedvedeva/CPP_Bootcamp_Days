/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:04:34 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:04:36 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon){
	this->name = name;
	this->weapon = &weapon;
}

void    HumanB::setWeapon(Weapon & weapon){
	this->weapon = &weapon;
}

void    HumanB::attack(){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
