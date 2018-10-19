/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:04:50 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:04:51 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->type = type;
}

void	Weapon::setType(std::string type){
	this->type = type;
}

const std::string &	Weapon::getType(){
	return type;
}
