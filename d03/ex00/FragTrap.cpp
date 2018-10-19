/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:59:30 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 16:59:32 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):	_name("nameless"),
							_hitPoints(100),
							_maxHitPoints(100),
							_energyPoints(100),
							_maxEnergyPoints(100),
							_level(1),
							_meleeAttackDamage(30),
							_rangedAttackDamage(20),
							_armorDamageReduction(5) {
	std::cout << "< " << this->_name << " > :" << std::endl;
	std::cout << " Directive one: Protect humanity!"
	<< " Directive two: Obey Jack at all costs."
	<< " Directive three: Dance!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const & name): _name(name),
											_hitPoints(100),
											_maxHitPoints(100),
											_energyPoints(100),
											_maxEnergyPoints(100),
											_level(1),
											_meleeAttackDamage(30),
											_rangedAttackDamage(20),
											_armorDamageReduction(5) {
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

void FragTrap::rangeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " at melee, causing "
			<< this->_meleeAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount) {
	amount -= (amount > this->_armorDamageReduction) ? this->_armorDamageReduction : amount;
	this->_hitPoints -= (this->_hitPoints > amount) ? amount : this->_hitPoints;
	std::cout << "FR4G-TP " << this->_name
			<< " got " << amount << " points of damage!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHitPoints - this->_hitPoints)
		amount = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += amount;
	std::cout << "FR4G-TP " << this->_name
			<< " got " << amount << " Hit points!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25) {
		std::cout << "Not enough energy. Please charge now!" << std::endl;
		return;
	}
	this->_energyPoints -= 25;
	std::string attacks[] = { "Brain Attack",
							"Laser Look",
							"Paralyzing Virus",
							"Fire Ball",
							"Radioactive Punches" };
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " with " << attacks[rand() % 5]
			<< "." << std::endl
			<< "Current level of Energy - "
			<< this->_energyPoints << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->_name << " died." << std::endl;
	return;
}
