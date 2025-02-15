/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/03 14:41:25 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/FragTrap.hpp"

int	main(void)
{
	FragTrap angelo("Ângelo");
	ScavTrap lou("Lourenco Antonio");

	angelo.attack(lou.getName());
	lou.takeDamage(angelo.getAttackDamage());
	angelo.beRepaired(lou.getAttackDamage());
	lou.attack(angelo.getName());
	angelo.takeDamage(lou.getAttackDamage());
	angelo.attack(lou.getName());
	lou.takeDamage(angelo.getAttackDamage());
	lou.guardGate();
	angelo.highFivesGuys();
	return (0);
}
