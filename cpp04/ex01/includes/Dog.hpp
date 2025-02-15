/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:23:44 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 08:29:37 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
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