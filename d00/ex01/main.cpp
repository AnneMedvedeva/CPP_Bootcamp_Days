#include <iostream>
#include <string>
#include "mng_contact.hpp"
#include "contact.hpp"

void		display_contact_info(Contact *instance, int i)
{
	std::cout << "First Name: " << instance->list[i].get_data(0) << std::endl;
	std::cout << "Last Name: " << instance->list[i].get_data(1) << std::endl;
	std::cout << "Nickname: " << instance->list[i].get_data(2) << std::endl;
	std::cout << "Login: " << instance->list[i].get_data(3) << std::endl;
	std::cout << "Postal Address: " << instance->list[i].get_data(4) << std::endl;
	std::cout << "Email Address: " << instance->list[i].get_data(5) << std::endl;
	std::cout << "Phone Number: " << instance->list[i].get_data(6) << std::endl;
	std::cout << "Birthdate: " << instance->list[i].get_data(7) << std::endl;
	std::cout << "Favorite Meal: " << instance->list[i].get_data(8) << std::endl;
	std::cout << "Underwear Color: " << instance->list[i].get_data(9) << std::endl;
	std::cout << "Darkest Secret: " << instance->list[i].get_data(10) << std::endl;
}

void		contact_index(Contact *instance, std::string response)
{
	if (response == "1" && (instance->list[0].get_data(0) != ""))
		display_contact_info(instance, 0);
	else if (response == "2" && (instance->list[1].get_data(0) != ""))
		display_contact_info(instance, 1);
	else if (response == "3" && (instance->list[2].get_data(0) != ""))
		display_contact_info(instance, 2);
	else if (response == "4" && (instance->list[3].get_data(0) != ""))
		display_contact_info(instance, 3);
	else if (response == "5" && (instance->list[4].get_data(0) != ""))
		display_contact_info(instance, 4);
	else if (response == "6" && (instance->list[5].get_data(0) != ""))
		display_contact_info(instance, 5);
	else if (response == "7" && (instance->list[6].get_data(0) != ""))
		display_contact_info(instance, 6);
	else if (response == "8" && (instance->list[7].get_data(0) != ""))
		display_contact_info(instance, 7);
	else
		std::cout << "Index number is invalid or the contact is empty" << std::endl;
}


std::string	display_check(Contact *instance, int i, int x)
{
	std::string input = instance->list[i].get_data(x);
	int a = input.length();

	if (a > 10)
	{
		input.erase(9, a);
		std::cout << input;
		return (".");
	}
	while (a++ < 10)
		std::cout << " ";
	return (input);
}

int			contact_search(Contact *instance, int *total)
{
	int i = 0;
	std::string output;
	std::string response;

	if (*total == 0)
	{
		std::cout << "There are no contacts here. * ~hello darkness, my old friend~ *" << std::endl;
		return (0);
	}
		std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while (i < *total)
	{
		std::cout << "|         " << (i + 1) << "|";
		output = display_check(instance, i, 0);
		std::cout << output << "|";
		output = display_check(instance, i, 1);
		std::cout << output << "|";
		output = display_check(instance, i, 2);
		std::cout << output << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "Please enter the index number of the contact you want to view." << std::endl;
	std::getline(std::cin, response);
	contact_index(instance, response);
	return (0);
}

int			add_contact(Contact *instance, int *total)
{
	int i = 0;
	std::string response = " ";

	if (*total == 8)
	{
		std::cout << "Sorry but contacts are added to the limit of 8." << std::endl;
		return (0);
	}
	std::cout << "Please fill in your new contact lists:" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, response);
	if(response == "")
	{
		std::cout << "ERROR: please submit contact's first name " << std::endl;
		return (0);
	}
	instance->list[*total].add_data(response, i++);
	std::cout << "Last Name: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Nickname: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Login: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Postal Address: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Email Address: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Phone Number: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Birthdate: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Favorite Meal: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Underwear Color: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, response);
	instance->list[*total].add_data(response, i++);
	std::cout << " SUCCESS " << std::endl;
	std::cout << "You've added " << instance->list[*total].get_data(0) << " " << instance->list[*total].get_data(1) << std::endl;
	*total = *total + 1;
	return (0);
}

int			exit_prompt(void)
{
	std::string response = " ";

	std::cout << "Are you sure you want to exit? All the data will be erased!" << std::endl;
	std::cout << "Please enter Y to exit program." << std::endl;
	std::getline(std::cin, response);
	if (response.compare("Y") == 0)
	{
		return (1);
	}
	return (0);
}

int			exec_commands(std::string input, Contact *instance, int *total)
{
	if (input.compare("EXIT") == 0)
		return (exit_prompt());
	else if (input.compare("ADD") == 0)
		return (add_contact(instance, total));
	else if (input.compare("SEARCH") == 0)
		return (contact_search(instance, total));
	return (0);
}

int			main(void)
{
	int i = 1;
	int total = 0;
	std::string input = " ";
	Contact instance[8];

	std::cout << "Welcome to your AWESOME phonebook!" << std::endl;
	while (i)
	{
		std::cout << "Commands: ADD - SEARCH - EXIT" << std::endl;
		std::cout << "* ADD - to add new contact *" << std::endl;
		std::cout << "* SEARCH - to search existing contacts *" << std::endl;
		std::cout << "* EXIT - exit your awesome phonebook *" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Exiting program ^CTRL + D pressed." << std::endl;
			return (0);
		}
		if (exec_commands(input, instance, &total))
			return (0);
	}
	return (0);
}