/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:06:27 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:06:28 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Logger.hpp"

int	main(int ac, char **av)
{
	Logger logger;
	std::string	dest;
	std::string	msg;

	if (ac != 3)
	{
		std::cout << "You must decide where you want to output your log and provide a message for your log." << std::endl <<
			"Valid destination: file, File, console, Console" << std::endl << std::endl <<
			"Usage: ./a.out [Valid Destination] [Message To Log]" << std::endl;
		return (0);
	}
	dest = av[1];
	msg = av[2];
	if ((dest.compare("file") == 0) || (dest.compare("File") == 0)
		|| (dest.compare("console") == 0 || dest.compare("Console") == 0))
	{
		if (msg.compare("") == 0)
		{
			std::cout << "You cannot provide a blank message." << std::endl;
			return (0);
		}

		logger.log(dest, msg);
	}
	else
	{
		std::cout << "You must decide where you want to output your log and provide a message for your log." << std::endl <<
			"Valid destination: file, File, console, Console" << std::endl << std::endl <<
			"Usage: ./a.out [Valid Destination] [Message To Log]" << std::endl;
		return (0);
	}
}
