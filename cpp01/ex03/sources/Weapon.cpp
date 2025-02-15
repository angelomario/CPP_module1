/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:58:54 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/22 10:31:39 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}
Weapon::~Weapon()
{
	return ;
}

std::string Weapon::getType()
{
    return (this->type);
}
void Weapon::setType(std::string name)
{
    this->type = name;
}

