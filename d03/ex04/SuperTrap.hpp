/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:04:48 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:04:50 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include <cstdlib>

class SuperTrap: public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const & robot);

	~SuperTrap(void);
};

#endif
