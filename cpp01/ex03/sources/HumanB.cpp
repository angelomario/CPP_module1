/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:09:08 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/25 11:32:59 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->my_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    my_weapon = &weapon;
}

