/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:00:28 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:00:30 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):	_name("nameless"),
							_hitPoints(100),
							_maxHitPoints(100),
							_energyPoints(50),
							_maxEnergyPoints(50),
							_level(1),
							_meleeAttackDamage(20),
							_rangedAttackDamage(15),
							_armorDamageReduction(3) {
	std::cout << "< " << this->_name << " > :" << std::endl
			<< "Ha-HA!I am ALIIIIVE!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const & name):	_name(name),
												_hitPoints(100),
												_maxHitPoints(100),
												_energyPoints(50),
												_maxEnergyPoints(50),
												_level(1),
												_meleeAttackDamage(20),
												_rangedAttackDamage(15),
												_armorDamageReduction(3) {
	std::cout << "< " << this->_name << " > :" << std::endl
			<< "Finally I'm alive!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & robot) {
	*this = robot;
	return;
}

void ScavTrap::rangeAttack(std::string const & target) {
	std::cout << this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << this->_name << " attacks "
			<< target << " at melee, causing "
			<< this->_meleeAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void ScavTrap::takeDamage(unsigned int amount) {
	amount -= (amount > this->_armorDamageReduction) ? this->_armorDamageReduction : amount;
	this->_hitPoints -= (this->_hitPoints > amount) ? amount : this->_hitPoints;
	std::cout << this->_name
			<< " got " << amount << " points of damage!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHitPoints - this->_hitPoints)
		amount = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += amount;
	std::cout << this->_name
			<< " got " << amount << " Hit points!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenges[] = {	"The Cinnamon",
									"Ice Bucket",
									"The Car Surfing",
									"No Mirror Makeup",
									"No Thumbs" };
	std::cout << "< " << this->_name << " > :" << std::endl
			<< "Time for "
			<< challenges[rand() % 5]
			<< " challenge!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "< " << this->_name << " > :" << std::endl
			<< "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return;
}
