/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:37:10 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/01 11:03:39 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Fixed.hpp"

// GETS AND SETS

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

// CONSTRUTORS

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

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixe = static_cast<int>(roundf((num) * (1 << bits)));
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixe = num << bits;
}

// CONVERTION
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

Fixed &Fixed::operator++()
{
	fixe++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	fixe++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	fixe--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	fixe--;
	return (tmp);
}

// MIN AND MAX

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

// COMPARISON OPERATORS
bool Fixed::operator>(const Fixed &other) const
{
	return (fixe > other.fixe);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->fixe < other.fixe);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->fixe <= other.fixe);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->fixe >= other.fixe);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->fixe != other.fixe);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->fixe == other.fixe);
}

// OPERATORS WITH INSTANCES

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed res;
	res = this->toFloat() + other.toFloat();
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed res;
	res = this->toFloat() - other.toFloat();
	return (res);
}

Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed res;

	res = (this->toFloat() * other.toFloat());
	return (res);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}
