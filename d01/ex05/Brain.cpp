/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:02:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:02:04 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Brain.hpp"

Brain::Brain()
{
	this->addr << this;
	return;
}

Brain::~Brain(void) 
{
	return;
}

std::string	Brain::identify()
{
	return (this->addr.str());
}
