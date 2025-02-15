/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:06:29 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/25 11:33:06 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMAN_B
# define HUMAN_B

# include "Weapon.hpp"

class HumanB
{
  private:
	Weapon* my_weapon;
	std::string name;

  public:
	HumanB(std::string name);
    void setWeapon(Weapon& weapon);
	void attack(void);
};

#endif
