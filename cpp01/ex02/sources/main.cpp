/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:17:56 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/23 18:23:39 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <ostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *PTR;
	std::string& REF = str;
	PTR = &str;
	
	std::cout << &str << std::endl;
	std::cout << PTR << std::endl;
	std::cout << &REF << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *PTR << std::endl;
	std::cout << REF << std::endl;
	return (0);
}
