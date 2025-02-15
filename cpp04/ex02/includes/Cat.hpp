/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:43 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 08:28:09 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal
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