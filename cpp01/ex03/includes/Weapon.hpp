/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:16:42 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/22 10:24:00 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <ostream>
# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon();
	Weapon(std::string name);
	~Weapon();
	std::string getType();
	void setType(std::string name);
};

#endif