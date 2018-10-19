/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:02:23 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:02:25 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_H
# define Human_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class	Human {

	public: 

		Human(void); 
		~Human(void);

		Brain refbrain;
		Brain &getBrain();
		std::string identify();

};

#endif
