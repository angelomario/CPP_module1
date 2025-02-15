/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:07:45 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/22 14:15:22 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): my_weapon(weapon)
{
    this->name = name;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->my_weapon.getType() << std::endl;
}
