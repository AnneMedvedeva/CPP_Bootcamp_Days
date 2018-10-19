/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:00:04 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:00:06 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony :: Pony(std :: string name) {
	this->name = name;
	std :: cout << this->name << " created" << std :: endl;
}

Pony :: ~Pony(){
	std :: cout << this->name << " has died" << std :: endl;
}
