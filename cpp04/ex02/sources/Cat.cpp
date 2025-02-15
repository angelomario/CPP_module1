/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:27:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:11:10 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Cat.hpp"

void Cat::makeSound(void) const
{
	std::cout << GREEN "Miaw Miaw" RESET << std::endl;
}

Cat::Cat(void)
{
    brain = new Brain();
    setType("Cat");
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}
Cat::Cat(const Cat &other): AAnimal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
        delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		brain->setIdea(index, idea);
}

const std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}
