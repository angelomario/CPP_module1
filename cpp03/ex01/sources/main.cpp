/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/03 14:36:26 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap angelo("Ângelo");
	ClapTrap lou("Lourenco Antonio");

	angelo.attack(lou.getName());
	angelo.takeDamage(lou.getAttackDamage());
	angelo.beRepaired(lou.getAttackDamage());
	lou.attack(angelo.getName());
	angelo.attack(lou.getName());
	angelo.guardGate();
	return (0);
}
