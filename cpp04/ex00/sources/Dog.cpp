/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 15:55:39 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << YELLOW "Woof Woof Woof" RESET << std::endl;
}

Dog::Dog(void)
{
    setType("Dog");
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog &other): Animal(other)
{
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}
