/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:04 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
#include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {
	private: 
		int		type;
	public:
		void	setZombieType(int type);
		Zombie*	randomChump();
		Zombie*	newZombie(std::string name);
};

#endif
