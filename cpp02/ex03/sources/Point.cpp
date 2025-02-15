/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:19:38 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/27 15:14:49 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Point.hpp"

Point::Point() : x(0), y(0)
{
    return ;
}

// Construtor parametrizado
Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y)
{
    return ;
}

// Construtor de cópia
Point::Point(const Point &other)
{
    *this = other;
    return ;
}

// Operador de atribuição
Point &Point::operator=(const Point &other)
{
    if (this == &other)
    {
        return (*this);
    }
	return (*this);
}

// Destrutor
Point::~Point()
{
    return ;
}

// Getters para os valores de x e y
const Fixed &Point::getX() const
{
	return (x);
}

const Fixed &Point::getY() const
{
	return (y);
}