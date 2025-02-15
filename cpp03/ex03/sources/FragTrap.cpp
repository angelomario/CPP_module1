/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 08:41:53 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 10:26:16 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap constructor with parameter!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
};

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor callled" << std::endl;
	return ;
};
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor callled" << std::endl;
	*this = other;
};

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assigment constructor called" << std::endl;
	if (this != &other)
	{
		this->setName(other.getName());
		this->setAttackDamage(other.getAttackDamage());
		this->setHitPoint(other.getHitPoint());
		this->setEnergyPoint(other.getEnergyPoint());
	}
	return (*this);
};

void	FragTrap::highFivesGuys(void)
{
    if (this->getEnergyPoint() > 0 && getHitPoint() > 0)
        std::cout << CYAN "Hi guys, i'm " << getName() << " and i'm in greatfull mode" RESET << std::endl;
};

void	FragTrap::attack(std::string target)
{
	if (energyPoint > 0 && hitPoint > 0)
	{
		std::cout << GREEN "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" RESET << std::endl;
	}
}
