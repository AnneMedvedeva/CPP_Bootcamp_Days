/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:02:10 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:02:11 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <sstream>
#include <string>

class	Brain {

	public: 

		Brain(void); 
		~Brain(void);

		std::stringstream	addr;
		std::string			identify();

};

#endif
