/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:11:24 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 11:26:23 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
  public:
	Cure(void);
	Cure(const Cure &cure);
	virtual ~Cure();

	Cure &operator=(const Cure &cure);

	Cure *clone() const;
	void use(ICharacter &target);
};