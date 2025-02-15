/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:21:22 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/08 16:47:20 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>
# include <string>
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"
class AAnimal
{
  protected:
	std::string type;

  public:
	AAnimal(void);
	virtual ~AAnimal(void);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual void makeSound(void) const = 0;
	virtual void setType(const std::string type);
	virtual std::string getType(void) const;
};

#endif