/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:18:37 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 12:47:24 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Ice.hpp"


Ice::Ice(const Ice &ice) : AMateria(ice)
{
	if (0)
		std::cout << "Ice copy constructor called" << std::endl;
	*this = ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *$" << std::endl;
}

Ice::Ice(void)
{
    _type = "ice";
	if (0)
		std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	if (0)
		std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
	(void)ice;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}