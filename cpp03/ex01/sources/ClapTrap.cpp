/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:51:19 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 09:49:22 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : hitPoint(10), energyPoint(10),
	attackDamage(0)
{
	this->name = name;
	std::cout << "ClapTrap constructor with parameter!" << std::endl;
	return ;
};
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
};
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assigment operator!" << std::endl;
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return (*this);
};
ClapTrap::ClapTrap()
{
	this->hitPoint = 0;
	this->energyPoint = 0;
	this->attackDamage = 0;
	std::cout << "ClapTrap default constructor!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoint > 0 && hitPoint > 0)
	{
		std::cout << GREEN "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage !" RESET << std::endl;
	}
};
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED "" << name << " takes " << amount << " point of damage!" RESET << std::endl;
	energyPoint--;
	hitPoint -= amount;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->energyPoint > 0))
    {
        std::cout << YELLOW "" << name << " repairs itself geting " << amount << " points!" RESET << std::endl;
        hitPoint += amount;
        energyPoint--;
    }
};
int ClapTrap::getHitPoint(void) const
{
	return (this->hitPoint);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (this->energyPoint);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void ClapTrap::setHitPoint(const int hitPoint)
{
	this->hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(const int energyPoint)
{
	this->energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(const int attackDamage)
{
	this->attackDamage = attackDamage;
}

const std::string ClapTrap::getName(void) const
{
	return (this->name);
};

void	ClapTrap::setName(const std::string name)
{
    this->name = name;
};

