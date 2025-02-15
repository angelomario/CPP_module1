/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:12:39 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Dog.hpp"

void Dog::makeSound(void) const
{
	std::cout << YELLOW "Woof Woof Woof" RESET << std::endl;
}

Dog::Dog(void)
{
	brain = new Brain();
	setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::~Dog(void)
{
	delete (brain);
	std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog &other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		brain->setIdea(index, idea);
}

const std::string Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}

