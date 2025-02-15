/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/10 09:30:26 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	// AAnimal a;
	// a.makeSound();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;
	int	k;
	int	limit = 4;

	AAnimal *animals[limit];

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
// 	Cat	original;

// 	original.setIdea(0, "Run in the park");
// 	Cat copy = original; // Chama o construtor de cópia
// 	std::cout << YELLOW "Original: " << original.getIdea(0) << RESET << std::endl;
// 	std::cout << GREEN "Copy: " << copy.getIdea(0) << RESET << std::endl;
// 	copy.setIdea(0, "Eat food"); // Modifica a cópia
// 	std::cout << RED "\n------------After modification--------------\n" RESET << std::endl;
// 	std::cout << YELLOW "Original: " << original.getIdea(0) << RESET << std::endl;
// 	std::cout << GREEN "Copy: " << copy.getIdea(0) << RESET << std::endl;
// 	return (0);
// }
