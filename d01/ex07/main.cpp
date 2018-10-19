/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:05:25 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/03 21:05:26 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	readFile(std::string name, std::string s1, std::string s2){
	std::string buff;
	std::string	s = ".replace";
	std::ofstream fout(name + s);
	std::ifstream fin(name);
	if(!fin.is_open())
	{
		std::cout << "File is not available" << std::endl;
		return ;
	}
	else
	{
		while(std::getline(fin, buff))
		{
			size_t p = buff.find(s1, 0);
			while(p != std::string::npos)
			{
				buff.replace(p, s1.length(), s2);
				p = buff.find(s1, p + s2.length());
			}
			fout << buff << std::endl;
		}
		fin.close();
		fout.close();
	}
}

bool	checkArg(char *av[]){
	if(av[1] == NULL || av[2] == NULL || av[3] == NULL)
		return false;
	else if(strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
		return false;
	return true;
}

int	main(int ac, char *av[]) {
	if(ac != 4 || !checkArg(av))
		std::cout << "Wrong argument" << std::endl;
	else
		readFile(av[1], av[2], av[3]);
	return 0;
}

