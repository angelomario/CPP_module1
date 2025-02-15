/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:09:47 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 09:48:34 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
  private:
  public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	void attack(std::string target);
	void guardGate();
};

#endif