/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:01:23 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:01:25 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap: public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & robot);

	void vaulthunter_dot_exe(std::string const & target);

	~FragTrap(void);
};

#endif
