/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:27:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 15:56:06 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Cat.hpp"

void Cat::makeSound(void) const
{
	std::cout << GREEN "Miaw Miaw" RESET << std::endl;
}

Cat::Cat(void)
{
    setType("Cat");
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}
Cat::Cat(const Cat &other): Animal(other)
{
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}
