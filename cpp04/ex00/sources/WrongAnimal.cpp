/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:45:01 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 16:22:33 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Animal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << RED "Miaw Miaw" RESET << std::endl;
}

void	WrongAnimal::setType(const std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
