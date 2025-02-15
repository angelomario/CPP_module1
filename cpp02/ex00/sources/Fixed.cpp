/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:37:10 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/27 11:49:05 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixe);
}
void Fixed::setRawBits(int raw)
{
	fixe = raw;
}

Fixed::Fixed() : fixe(0)
{
	std::cout << "Default construtor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other) : fixe(other.fixe)
{
	std::cout << "Copy construtor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixe = other.fixe;
	return (*this);
}
