/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:06:20 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:06:22 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	Logger 
{

	public:

		Logger(void);
		~Logger(void);

		void			log(std::string const &dest, std::string const &message);

	private:

		void			logToConsole(std::string const &input);
		void			logToFile(std::string const &input);
		std::string		makeLogEntry(std::string message);


}; 

#endif
