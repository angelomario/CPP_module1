/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:50:23 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/24 10:45:08 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *nzombie;

    if (N < 0)
        return (NULL);
    nzombie = new Zombie[N];
    while (--N >= 0)
        new(&nzombie[N]) Zombie(name);
    return (nzombie);
}
