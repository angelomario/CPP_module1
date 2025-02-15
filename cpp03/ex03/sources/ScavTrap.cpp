/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:24:20 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 10:16:31 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
};
ScavTrap::ScavTrap(const std::string name)
{
	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor with parameter called" << std::endl;
};
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = other;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assigment called" << std::endl;
	this->setName(other.getName());
	this->setAttackDamage(other.getAttackDamage());
	this->setEnergyPoint(other.getEnergyPoint());
	this->setHitPoint(other.getHitPoint());
	return (*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
};

void ScavTrap::guardGate(void)
{
	std::cout << CYAN "ScavTrap " << this->getName() << " is now in Gate keeper mode" RESET << std::endl;
};

void	ScavTrap::attack(std::string target)
{
	if (energyPoint > 0 && hitPoint > 0)
	{
		std::cout << GREEN "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage !" RESET << std::endl;
	}
}
