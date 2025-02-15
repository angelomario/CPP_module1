/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:33:50 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 10:40:23 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "../includes/FragTrap.hpp"
# include "../includes/ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	std::string trapname;

  public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();
	void attack(std::string target);
	void whoAmI();
};

#endif