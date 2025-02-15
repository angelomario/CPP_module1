/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:36:24 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/06 12:44:36 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>

class	ICharacter;

class AMateria
{
  protected:
	std::string _type;

  public:
	AMateria(void);
	AMateria(const std::string &type);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &aMateria);

	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif