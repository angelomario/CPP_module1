/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:24:45 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:48:29 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

class IMateriaSource
{
  public:
	virtual ~IMateriaSource() = 0;
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif