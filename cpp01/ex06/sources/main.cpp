/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:17:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/23 17:53:52 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string tmp;
		Harl harry;
		int	i;

		i = -1;
		tmp = av[1];
		std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		while (i < 4 && (levels[i] != tmp))
			i++;
		switch (i)
		{
			case 0:
				break ;
			case 1:
				break ;
			case 2:
				break ;
			case 3:
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
		}
		while (i < 4)
		{
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			harry.complain(levels[i++]);
			std::cout << std::endl;
		}
	}
	else
		std::cout << "You must be insert only one argument" << std::endl;
	return (0);
}
