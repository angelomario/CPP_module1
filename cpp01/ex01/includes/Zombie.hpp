/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:16:42 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/21 18:32:31 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <ostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
Zombie *newZombie(std::string name);
#endif