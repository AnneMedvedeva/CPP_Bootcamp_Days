/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:12 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:13 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{
	int			ztype[6] = {1,2,3,4,5,6};
	std::string	name[6] = {"Twilight Sparkle", "Applejack", "Fluttershy", "Rainbow Dash", "Pinkie Pie", "Rarity"};
	this->name = name[std::rand() % 6];
	this->type = ztype[std::rand() % 6];
}

Zombie :: Zombie(std::string name, int type){
	this->name = name;
	this->type = type;
}

Zombie :: ~Zombie(){
	std::cout << this->name << " has died" << std :: endl;
}

void	Zombie :: announce(){
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
