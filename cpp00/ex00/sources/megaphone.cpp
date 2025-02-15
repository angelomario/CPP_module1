/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:38:46 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/16 17:38:48 by aquissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype> // Para std::toupper
#include <iostream>
#include <string>

std::string uppercase(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        str[i] = std::toupper(str[i]);
    return ((std::string)str);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
        av = &av[1];
        while (*av)
        {
            std::cout << uppercase(*(av++));
            if (!(*av))
                std::cout << std::endl;
            else
                std::cout << " ";
        }
	}
	return (0);
}
