/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:47:49 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:28:54 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	int	i;

	i = 0;
	while (i < 100)
		ideas[i++] = "";
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}
Brain &Brain::operator=(const Brain &other)
{
	int	i;

	i = 0;
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	while (i < 100 && (other.ideas[i].length() > 0))
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);
}

void Brain::setIdeas(const std::string idea)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		ideas[i] = idea;
		i++;
	}
}

void Brain::setIdea(int idx, const std::string idea)
{
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
}

const std::string Brain::getIdea(int idx)
{
	if (idx >= 0 && idx < 100)
		return (ideas[idx]);
	else
		return (NULL);
}
