/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:01:33 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:01:35 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde {
	private:
		int 	n;
		Zombie* zombies;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce();
};

#endif
