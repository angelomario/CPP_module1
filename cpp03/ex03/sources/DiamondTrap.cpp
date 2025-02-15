/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:44:51 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 10:44:36 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string _name) : ClapTrap(_name
	+ "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	name = _name;
	this->trapname = _name + "_clap_name";
	hitPoint = ClapTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap constructor with parameter!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor callled" << std::endl;
	return ;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
	ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor callled" << std::endl;
	*this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap assigment constructor called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->attackDamage = other.attackDamage;
		this->hitPoint = other.hitPoint;
		this->energyPoint = other.energyPoint;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << CYAN "Hi, i'm " << name << " and my trapename is " << trapname
		+ "" RESET << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	this->ScavTrap::attack(target);
}
