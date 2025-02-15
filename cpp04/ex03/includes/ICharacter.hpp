/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 05:39:50 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/06 09:44:48 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

# include <iostream>
# include <string>
class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual const std::string &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
	virtual void printInventory(void) const = 0;
};
