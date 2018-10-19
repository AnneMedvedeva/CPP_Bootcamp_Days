/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:00:59 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:01:00 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):	_name("nameless"),
 							_hitPoints(0),
							_maxHitPoints(0),
							_energyPoints(0),
							_maxEnergyPoints(0),
							_level(0),
							_meleeAttackDamage(0),
							_rangedAttackDamage(0),
							_armorDamageReduction(0) {
	std::cout << "ClapTrap created." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string const & name):	_name(name),
					 							_hitPoints(0),
												_maxHitPoints(0),
												_energyPoints(0),
												_maxEnergyPoints(0),
												_level(0),
												_meleeAttackDamage(0),
												_rangedAttackDamage(0),
												_armorDamageReduction(0) {
	std::cout << "ClapTrap created." << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & robot) {
	*this = robot;
	return;
}

void ClapTrap::rangeAttack(std::string const & target) {
	std::cout << "ClapTrap entered." << std::endl;
	std::cout << this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "ClapTrap entered." << std::endl;
	std::cout << this->_name << " attacks "
			<< target << " at melee, causing "
			<< this->_meleeAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap entered." << std::endl;
	amount -= (amount > this->_armorDamageReduction) ? this->_armorDamageReduction : amount;
	this->_hitPoints -= (this->_hitPoints > amount) ? amount : this->_hitPoints;
	std::cout << this->_name
			<< " got " << amount << " points of damage!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap entered." << std::endl;
	if (amount > this->_maxHitPoints - this->_hitPoints)
		amount = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += amount;
	std::cout << this->_name
			<< " got " << amount << " Hit points!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

std::string ClapTrap::getName(void) {
	return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints(void) {
	return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints(void) {
	return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel(void) {
	return this->_level;
}

unsigned int ClapTrap::getMeleeAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getRangedAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getArmorDamageReduction(void) {
	return this->_armorDamageReduction;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
	return;
}

void ClapTrap::setHitPoints(unsigned int num) {
	this->_hitPoints = num;
	return;
}

void ClapTrap::setMaxHitPoints(unsigned int num) {
	this->_maxHitPoints = num;
	return;
}

void ClapTrap::setEnergyPoints(unsigned int num) {
	this->_energyPoints = num;
	return;
}

void ClapTrap::setMaxEnergyPoints(unsigned int num) {
	this->_maxEnergyPoints = num;
	return;
}

void ClapTrap::setLevel(unsigned int num) {
	this->_level = num;
	return;
}

void ClapTrap::setMeleeAttackDamage(unsigned int num) {
	this->_meleeAttackDamage = num;
	return;
}

void ClapTrap::setRangedAttackDamage(unsigned int num) {
	this->_rangedAttackDamage = num;
	return;
}

void ClapTrap::setArmorDamageReduction(unsigned int num) {
	this->_armorDamageReduction = num;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap destroyed." << std::endl;
	return;
}
