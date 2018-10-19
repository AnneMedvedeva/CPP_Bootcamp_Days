/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:02:42 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:02:43 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

class NinjaTrap: public ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & robot);

	void ninjaShoebox(ClapTrap & riv);
	void ninjaShoebox(FragTrap & riv);
	void ninjaShoebox(ScavTrap & riv);
	void ninjaShoebox(NinjaTrap & riv);

	~NinjaTrap(void);
};

#endif
