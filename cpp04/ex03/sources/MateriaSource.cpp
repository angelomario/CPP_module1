/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:15:32 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 13:11:54 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/AMateria.hpp"
#include "../includes/MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    int i;

    i = 4;
    while (i--)
    {
        if (_materia[i])
            delete _materia[i];
    }
	if (0)
		std::cout << "MateriaSource destructor called" << std::endl;
}
void MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while ((i >= 0 && i < 4))
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			break ;
		}
		i++;
	}
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (_materia[i])
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
		i++;
	}
	return (NULL);
}

MateriaSource::MateriaSource()
{
    int i;

    i = 0;
    while (i < 4)
        _materia[i++] = NULL;
    if (0)
        std::cout << "MateriaSource default constructor called" << std::endl;
}
