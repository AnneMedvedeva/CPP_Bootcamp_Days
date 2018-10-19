/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:59:44 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 16:59:45 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap robot("Peter");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(70);
	robot.takeDamage(40);
	robot.beRepaired(80);
	robot.beRepaired(80);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
}
