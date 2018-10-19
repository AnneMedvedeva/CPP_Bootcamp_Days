/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:05:50 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:05:51 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target){
	std::cout << "meleeAttack was called from " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target){
    std::cout << "rangedAttack was called from "<< target << std::endl;
}

void	Human::intimidatingShout(std::string const & target){
    std::cout << "intimidatingShout was called from "<< target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target){
	
	typedef void (Human::*Test)(std::string const & target);
	std::string name[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	Test test[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for(int i = 0; i < 3; i++)
	{
		if(name[i] == action_name)
			(this->*test[i])(target);
	}
}
