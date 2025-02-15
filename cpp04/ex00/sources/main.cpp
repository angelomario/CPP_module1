/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/07 13:36:46 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const WrongAnimal	*a = new WrongAnimal;
	const WrongCat	*c = new WrongCat;

	std::cout << "--------Animals---------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "--------Wrong Animals---------" << std::endl;
	std::cout << a->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	a->makeSound();
	c->makeSound();
	delete meta;
	delete i;
	delete j;
	delete a;
	delete c;
	return (0);
}
