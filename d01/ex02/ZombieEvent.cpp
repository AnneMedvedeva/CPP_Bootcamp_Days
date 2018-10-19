/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:00:56 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:00:57 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(int type){
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name){
	Zombie* zombie = new Zombie(name, this->type);
	return zombie;
}

Zombie*	ZombieEvent::randomChump(){
	int         ztype[6] = {1,2,3,4,5,6};
	std::string name[6] = {"Twilight Sparkle", "Applejack", "Fluttershy", "Rainbow Dash", "Pinkie Pie", "Rarity"};

	setZombieType(ztype[std::rand() % 6]);
	Zombie* zombie = newZombie(name[std::rand() % 6]);
	zombie->announce();
	return zombie;
}
