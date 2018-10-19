/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:02:11 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:02:13 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap {
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	unsigned int _armorDamageReduction;

public:
	ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & robot);

	void rangeAttack(std::string const & targe);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void);
	unsigned int getHitPoints(void);
	unsigned int getMaxHitPoints(void);
	unsigned int getEnergyPoints(void);
	unsigned int getMaxEnergyPoints(void);
	unsigned int getLevel(void);
	unsigned int getMeleeAttackDamage(void);
	unsigned int getRangedAttackDamage(void);
	unsigned int getArmorDamageReduction(void);

	void setName(std::string name);
	void setHitPoints(unsigned int num);
	void setMaxHitPoints(unsigned int num);
	void setEnergyPoints(unsigned int num);
	void setMaxEnergyPoints(unsigned int num);
	void setLevel(unsigned int num);
	void setMeleeAttackDamage(unsigned int num);
	void setRangedAttackDamage(unsigned int num);
	void setArmorDamageReduction(unsigned int num);

	~ClapTrap(void);
};

#endif
