/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:11:43 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/23 10:33:26 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(std::string level);
};

#endif
