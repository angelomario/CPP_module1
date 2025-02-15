/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:03:24 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 13:09:53 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"

Character::~Character()
{
	int	i;

	i = 4;
	while (i--)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	if (0)
		std::cout << "Character destructor called" << std::endl;
}
const std::string &Character::getName() const
{
	return (_name);
}
void Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
		i++;
	}
}

Character::Character(void) : _name("")
{
	int	i;

	i = 0;
	while (i < 4)
		_inventory[i++] = NULL;
	return ;
}

Character::Character(const std::string &name) : _name(name)
{
	int	i;

	i = 0;
	while (i < 4)
		_inventory[i++] = NULL;
	if (0)
		std::cout << "Character constructor called" << std::endl;
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
}

void Character::printInventory(void) const
{
	std::cout << "Iventory: " << _inventory[0]->getType() << std::endl;
}
