/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:04:40 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:04:43 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap (void) {

	setHitPoints(FragTrap::getHitPoints());
	setMaxHitPoints(FragTrap::getMaxHitPoints());
	setEnergyPoints(NinjaTrap::getEnergyPoints());
	setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	setLevel(1);
	setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	std::cout << "SuperTrap created." << std::endl;
	std::cout << "Wazzzzzuuppp man! So here I am, your SuPEr tRaP "
			<< getName() << "." << std::endl;
	return;
}

SuperTrap::SuperTrap (std::string const & name) {

	setName(name);
	setHitPoints(FragTrap::getHitPoints());
	setMaxHitPoints(FragTrap::getMaxHitPoints());
	setEnergyPoints(NinjaTrap::getEnergyPoints());
	setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	setLevel(1);
	setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	std::cout << "SuperTrap created." << std::endl;
	std::cout << "Wazzzzzuuppp man! So here I am, your SuPEr tRaP "
			<< getName() << "." << std::endl;
	return;
}

SuperTrap::SuperTrap (SuperTrap const & robot) {
	*this = robot;
	return;
}

SuperTrap::~SuperTrap (void) {
	std::cout << "< " << getName() << " > :" << std::endl;
	std::cout << "That's it? Well.. I had better days..." << std::endl;
	return;
}
