/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/03 14:32:33 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap angelo("Ângelo");
	ClapTrap lou("Lourenco Antonio");

	angelo.attack(lou.getName());
	angelo.takeDamage(lou.getAttackDamage());
	angelo.beRepaired(lou.getAttackDamage());
	angelo.attack(lou.getName());
	return (0);
}
