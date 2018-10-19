/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:00:16 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:00:18 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony*	ponyOnTheHeap(std::string name){
	Pony* pony = new Pony(name);
	return pony;
}

Pony	ponyOnTheStack(std::string name){
	Pony pony = Pony(name);
	return pony;
}

int	main(void){
	Pony    pony1 = ponyOnTheStack("Pony Stack");
	Pony*	pony2 = ponyOnTheHeap("Pony Heap");

	delete pony2;
	return (0);
}
