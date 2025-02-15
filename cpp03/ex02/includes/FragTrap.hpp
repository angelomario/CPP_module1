/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 07:10:52 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 10:23:48 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
  private:
  public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap &operator=(const FragTrap &other);
	FragTrap(const FragTrap &other);
	~FragTrap();
	void attack(std::string target);
	void highFivesGuys(void);
};

#endif