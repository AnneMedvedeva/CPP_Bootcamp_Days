/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:02:36 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:02:38 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {

	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
	std::cout << "NinjaTrap created." << std::endl;
	std::cout << "Hey There! I'm " << getName()
			<< " and it's pleasure to meet you!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string const & name) {

	setName(name);
	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
	std::cout << "NinjaTrap created." << std::endl;
	std::cout << "Hey There! I'm " << getName()
			<< " and it's pleasure to meet you!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & robot) {
	*this = robot;
	return;
}

void NinjaTrap::ninjaShoebox(ClapTrap & riv) {
	std::cout << getName() << " meets this rival " << riv.getName() << std::endl;
	meleeAttack(riv.getName());
	riv.takeDamage(getMeleeAttackDamage());
	return;
}

void NinjaTrap::ninjaShoebox(FragTrap & riv) {
	std::cout << getName() << " meets this rival " << riv.getName() << std::endl;
	rangeAttack(riv.getName());
	riv.takeDamage(getRangedAttackDamage());
	return;
}

void NinjaTrap::ninjaShoebox(ScavTrap & riv) {
	std::cout << getName() << " meets this rival " << riv.getName() << std::endl;
	meleeAttack(riv.getName());
	riv.takeDamage(getMeleeAttackDamage());
	riv.beRepaired(10);
	return;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & riv) {
	std::cout << getName() << " meets this rival " << riv.getName() << std::endl;
	rangeAttack(riv.getName());
	riv.takeDamage(getRangedAttackDamage());
	riv.beRepaired(10);
	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "< " << getName() << " > :" << std::endl
			<< "What a great time! And now I have to leave... Goodbye my friend!"
			<< std::endl;
	return;
}
