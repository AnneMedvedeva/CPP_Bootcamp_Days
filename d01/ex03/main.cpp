/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:44 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:45 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void){
	srand(time(0));
	ZombieHorde*  zombiehord = new ZombieHorde(15);
	delete zombiehord;
	return 0;
}
