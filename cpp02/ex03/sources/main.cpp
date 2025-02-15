/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:27:12 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/01 12:36:13 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/Point.hpp"

float	area(Point const &A, Point const &B, Point const &C)
{
	return (std::abs((((A.getX() * (B.getY() - C.getY())) + (B.getX()
						* (C.getY() - A.getY())) + (C.getX() * (A.getY()
							- B.getY()))) / Fixed(2.0f)).toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (area(a, b, c) == (area(point, a, b) + area(point, b, c)
			+ area(point, c, a)));
};
int	main(void)
{
	std::cout << bsp(Point(0, 5), Point(5, 0), Point(0, 0), Point(1, 4)) << std::endl;
	return (0);
}
