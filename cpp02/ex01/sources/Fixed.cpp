/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:37:10 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/01 10:53:02 by aquissan         ###   ########.fr       */
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
	std::cout << "setRawBits member function called" << std::endl;
	fixe = raw;
}

Fixed::Fixed() : fixe(0)
{
	std::cout << "Default construtor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy construtor called" << std::endl;
	*this = other;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixe = static_cast<int>(roundf((num) * (1 << bits)));
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixe = num << bits;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(fixe) / (1 << bits));
}
int Fixed::toInt(void) const
{
	return (fixe >> bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &FP)
{
	os << FP.toFloat();
	return (os);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixe = other.fixe;
	return (*this);
}
