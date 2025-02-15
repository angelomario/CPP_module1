/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:23:44 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 08:31:33 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : virtual public AAnimal
{
  private:
	Brain *brain;

  public:
	virtual void makeSound(void) const;
	Dog(void);
	~Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	void setIdea(int index, std::string idea);
	const std::string getIdea(int index) const;
};

#endif