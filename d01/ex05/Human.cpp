/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:02:17 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:02:18 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string Human::identify()
{
	return (this->refbrain.identify());
}

Brain &Human::getBrain(void)
{
	return (this->refbrain);
}
