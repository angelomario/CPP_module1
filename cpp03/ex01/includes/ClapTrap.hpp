/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:43:27 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/03 18:52:54 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <cmath>
# include <iostream>
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"

class ClapTrap
{
  protected:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;

  public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	ClapTrap();
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string getName(void) const;
	int getEnergyPoint(void) const;
	int getHitPoint(void) const;
	int getAttackDamage(void) const;
	void setAttackDamage(const int attackDamage);
	void setEnergyPoint(const int energyPoint);
	void setHitPoint(const int hitPoint);
	void setName(const std::string name);
};

#endif