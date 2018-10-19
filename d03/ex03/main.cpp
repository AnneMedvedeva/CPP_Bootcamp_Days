/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:03:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:03:05 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	ClapTrap a("Annie");
	FragTrap b("Bobbie");
	ScavTrap c("Carmen");
	NinjaTrap d("David");
	NinjaTrap robot("Max");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.ninjaShoebox(a);
	robot.ninjaShoebox(b);
	robot.ninjaShoebox(c);
	robot.ninjaShoebox(d);
}
