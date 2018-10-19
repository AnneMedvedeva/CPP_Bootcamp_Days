/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:03:43 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:03:44 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){

	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	std::cout << "FragTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl;
	std::cout << " Directive one: Protect humanity!"
	<< " Directive two: Obey Jack at all costs."
	<< " Directive three: Dance!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const & name){

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	std::cout << "FragTrap created." << std::endl;
	std::cout << "< " << name << " >:" << std::endl;
	std::cout << " Directive one: Protect humanity!"
			<< " Directive two: Obey Jack at all costs."
			<< " Directive three: Dance!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & robot) {
	*this = robot;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (getEnergyPoints() < 25) {
		std::cout << "Not enough energy. Please charge now!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::string attacks[] = { "Brain Attack",
							"Laser Look",
							"Paralyzing Virus",
							"Fire Ball",
							"Radioactive Punches" };
	std::cout << "FR4G-TP " << getName() << " attacks "
			<< target << " with " << attacks[rand() % 5]
			<< "." << std::endl
			<< "Current level of Energy :: "
			<< getEnergyPoints() << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << getName() << " died." << std::endl;
	return;
}
