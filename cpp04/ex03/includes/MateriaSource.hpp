/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:37:23 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 12:55:05 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *_materia[4];

  public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif