/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:04:12 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:04:13 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	std::cout << "ScavTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Finally I'm alive!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const & name) {

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	std::cout << "ScavTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Finally I'm alive!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & robot) {
	*this = robot;
	return;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenges[] = {	"The Cinnamon",
									"Ice Bucket",
									"The Car Surfing",
									"No Mirror Makeup",
									"No Thumbs" };
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Time for "
			<< challenges[rand() % 5]
			<< " challenge!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "< " << getName() << " > :" << std::endl
			<< "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return;
}
