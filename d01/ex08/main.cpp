/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:06:03 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:06:04 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void){

	Human human;
	human.action("meleeAttack", "Fluttershy");
	human.action("rangedAttack", "Rainbow Dash");
	human.action("intimidatingShout", "Pinkie Pie");
	return 0;
}
