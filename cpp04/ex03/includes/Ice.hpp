/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:10:50 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 11:17:11 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
  public:
	Ice(void);
	Ice(const Ice &ice);
	virtual ~Ice();
	Ice &operator=(const Ice &ice);

	Ice *clone() const;
	void use(ICharacter &target);
};

