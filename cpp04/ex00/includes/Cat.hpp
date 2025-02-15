/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:43 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 15:50:05 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : virtual public Animal
{
  public:
	virtual void makeSound(void) const;
    Cat(void);
    ~Cat(void);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
};

#endif