/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:23:44 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/04 15:50:17 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : virtual public Animal
{
  public:
    virtual void makeSound(void) const;
    Dog(void);
    ~Dog(void);
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
};

#endif