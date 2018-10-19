/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:00:41 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:00:42 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
