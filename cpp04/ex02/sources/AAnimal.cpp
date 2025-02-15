/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:45:01 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/08 16:44:59 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : type("Man")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assigment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

void AAnimal::makeSound(void) const
{
	return ;
}

void	AAnimal::setType(const std::string type)
{
	this->type = type;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
