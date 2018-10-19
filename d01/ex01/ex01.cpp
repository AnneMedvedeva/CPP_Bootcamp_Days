/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:00:32 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:00:34 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() 
{
	std::string		*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}
