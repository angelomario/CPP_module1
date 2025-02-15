/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:17:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/25 11:36:40 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl harry;

	harry.complain("DEBUG");
	harry.complain("INFORMATION");
	harry.complain("ERROR");
	return (0);
}
