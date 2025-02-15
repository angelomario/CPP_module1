/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:27:17 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	int	k;
	int	limit = 4;

	Animal *animals[limit];

	k = -1;
	while (++k < (limit / 2))
		animals[k] = new Dog;
	--k;
	while (++k < limit)
		animals[k] = new Cat;
	k = -1;
	while (++k < limit)
		animals[k]->makeSound();
	k = -1;
	while (++k < limit)
		delete animals[k];
	return (0);
}

// int	main(void)
// {
// 	Dog	original;

// 	original.setIdea(0, "Run in the park");
// 	Dog copy = original; // Chama o construtor de cópia
// 	std::cout << YELLOW "Original: " << original.getIdea(0) << RESET << std::endl;
// 	std::cout << GREEN "Copy: " << copy.getIdea(0) << RESET << std::endl;
// 	copy.setIdea(0, "Eat food"); // Modifica a cópia
// 	std::cout << RED "\n------------After modification--------------\n" RESET << std::endl;
// 	std::cout << YELLOW "Original: " << original.getIdea(0) << RESET << std::endl;
// 	std::cout << GREEN "Copy: " << copy.getIdea(0) << RESET << std::endl;
// 	return (0);
// }
