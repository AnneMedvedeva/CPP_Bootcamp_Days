/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:54 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:56 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() 
{
	std::string		hi = "HI THIS IS BRAIN";
	std::string 	*ptr = &hi;
	std::string		&ref = hi;

	std::cout << "This is display with pointer:" << std::endl << *ptr << std::endl;

	std::cout << std::endl << "This is display with reference:" << std::endl << ref << std::endl;

	return (0);
}
