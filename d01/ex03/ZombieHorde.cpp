/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:25 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:26 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
	this->n = n;
	this->zombies = new Zombie[n];
	this->announce();
}

ZombieHorde::~ZombieHorde(){
	delete [] this->zombies;
	std::cout << "ZombieHorde " << this->n << " has died" << std::endl;
}

void	ZombieHorde::announce(){
	int k;

	k = 0;
	while(k < this->n)
	{
		this->zombies[k].announce();
		k++;
	}
}
