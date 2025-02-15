/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:17:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/24 10:43:17 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Zombie.hpp"
#include "../includes/head.hpp"

int	main(void)
{
	Zombie	*a;

	Zombie z("Lorenco");
	z.announce();
	randomChump("Angelo");
	a = newZombie("Strong");
	(*a).announce();
	delete (a);
	return (0);
}
