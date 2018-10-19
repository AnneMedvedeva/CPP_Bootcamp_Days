/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:01:46 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:01:48 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap robot("Peter");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");

	ScavTrap rob("Moly");
	
	rob.rangeAttack("human");
	rob.meleeAttack("another robot");
	rob.takeDamage(30);
	rob.takeDamage(40);
	rob.beRepaired(10);
	rob.beRepaired(50);
	rob.challengeNewcomer();
	rob.challengeNewcomer();
	rob.challengeNewcomer();

}
