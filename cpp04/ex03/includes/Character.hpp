/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:58:50 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/06 15:58:31 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private: 
	std::string _name;
	AMateria* _inventory[4];
  public:
	Character();
	Character(const std::string& name);
	~Character();
	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	void printInventory(void) const;
};