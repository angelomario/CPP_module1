/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:41:37 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 13:02:01 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria(void)
{
	if (0)
		std::cout << "AMateria default constructor called" << std::endl;
	_type = "";
	return ;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses " << _type << " on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
	if (0)
		std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}
