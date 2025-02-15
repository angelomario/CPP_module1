/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:01:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/22 14:13:17 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"

class HumanA
{
  private:
	Weapon& my_weapon;
	std::string name;

  public:
	HumanA(std::string name, Weapon& weapon);
	void attack(void);
};

#endif