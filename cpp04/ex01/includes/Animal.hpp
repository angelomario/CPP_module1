/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:21:22 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/08 16:29:05 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
class Animal
{
  protected:
	std::string type;

  public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual void makeSound(void) const;
	virtual void setType(const std::string type);
	virtual std::string getType(void) const;
};

#endif