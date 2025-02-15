/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:43 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/08 20:02:32 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal
{
  private:
	Brain *brain;

  public:
	virtual void makeSound(void) const;
	Cat(void);
	~Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	void setIdea(int index, std::string idea);
	const std::string getIdea(int index) const;
};

#endif