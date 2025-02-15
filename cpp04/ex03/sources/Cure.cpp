/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:26:27 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 12:47:06 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Cure.hpp"


Cure::Cure(const Cure &cure) : AMateria(cure)
{
	if (0)
		std::cout << "Cure copy constructor called" << std::endl;
	*this = cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *$" << std::endl;
}

Cure::Cure(void)
{
    _type = "cure";
	if (0)
		std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	if (0)
		std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
	(void)cure;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}