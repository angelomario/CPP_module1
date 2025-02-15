/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:32:07 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/08 16:21:55 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BRAIN_H
# define BRAIN_H

# include "Animal.hpp"

class Brain
{
  private:
	std::string ideas[100];

  public:
  Brain(void);
  ~Brain(void);
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);
  void setIdeas(const std::string idea);
  void setIdea(int idx, const std::string idea);
  const std::string getIdea(int idx);
};

#endif