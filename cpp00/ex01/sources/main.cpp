/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:38:46 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/21 14:35:54 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/PhoneBook.hpp"
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <stdlib.h>

std::string read_input(std::string message)
{
	std::string str;
	if (message.length() > 0)
		std::cout << message;
	std::cin >> str;
	if (std::cin.eof())
		exit(0);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (str);
}
std::string truncat(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return (str);
}

void	filter_contact(PhoneBook phone)
{
	int	n;
	t_contact	contact;
	std::string			num;

	std::cout << "Search by index: ";
	std::cin >> num;
	if (std::cin.eof())
		exit(0);
	n = atoi(num.c_str()) - 1;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (std::cin.fail() || num.length() != 1 || n < 0 || n > 8)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	else
	{
		contact = phone.get_contact(n);
		if (contact.name.length() <= 0)
			filter_contact(phone);
		else
		{
			std::cout << "Index: " << num << std::endl;
			std::cout << "Name: " << contact.name << std::endl;
			std::cout << "Last name: " << contact.lastname << std::endl;
			std::cout << "Nickname: " << contact.nickname << std::endl;
			std::cout << "Phone number: " << contact.number << std::endl;
			std::cout << "Darkest secret: " << contact.darkestsecret << std::endl;
		}
	}
}

void	search_contact(PhoneBook phone)
{
	t_contact	contact;
	int			i;

	i = -1;
	std::cout << std::setw(10) << "ID"
				<< "|" << std::setw(10) << "NAME"
				<< "|" << std::setw(10) << "LAST NAME"
				<< "|" << std::setw(10) << "NICK NAME"
				<< "|" << std::endl;
	while (++i < 8)
	{
		contact = phone.get_contact(i);
		if (contact.name.length() != 0)
		{
			std::cout << std::setw(10) << (i + 1) << "|";
			std::cout << std::setw(10) << truncat(contact.name) << "|";
			std::cout << std::setw(10) << truncat(contact.lastname) << "|";
			std::cout << std::setw(10) << truncat(contact.nickname) << "|" << std::endl;
		}
	}
	filter_contact(phone);
}

std::string get_onlynumber(std::string message)
{
	int	i;

	std::string str;
	if (message.length() > 0)
		std::cout << message;
	std::cin >> str;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	i = -1;
	if (std::cin.eof())
		exit(0);
	while (str[++i])
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "Invalid number, please try again.\n";
			return (get_onlynumber(message));
		}
	}
	return (str);
}

int	add_contact(PhoneBook *phone)
{
	Contact		ct;
	t_contact	contact;

	contact.index = 0;
	contact.name = read_input("Name (10): ");
	contact.lastname = read_input("Last name (10): ");
	contact.nickname = read_input("Nickname (10): ");
	contact.number = get_onlynumber("Phone Number (10): ");
	std::cout << "Darkest secret (10): ";
	std::getline(std::cin, contact.darkestsecret);
	std::cout << std::endl;
	if (std::cin.eof())
		exit(0);
	ct.set_contact(contact);
	(*phone).set_new(ct);
	return (0);
}

int	main(void)
{
	int			i;
	PhoneBook	phone;

	i = 0;
	phone.set_index(0);
	phone.set_index(1);
	std::string input;
	while (i == 0)
	{
		std::cout << "CHOOSE: ADD/SEARCH/EXIT\n";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			i = 1;
		else if (input == "SEARCH")
			search_contact(phone);
		else if (input == "ADD")
			add_contact(&phone);
	}
	return (0);
}
