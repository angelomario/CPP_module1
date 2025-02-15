/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:27:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 15:56:06 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/WrongCat.hpp"

void WrongCat::makeSound(void) const
{
	std::cout << GREEN "Animal's sound" RESET << std::endl;
}

WrongCat::WrongCat(void)
{
    setType("WrongCat");
    std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return (*this);
}
