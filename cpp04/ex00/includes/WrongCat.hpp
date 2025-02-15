/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:24:43 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 08:10:12 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	void makeSound(void) const;
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
};

#endif