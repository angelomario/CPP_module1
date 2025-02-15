/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:13:52 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/27 15:16:55 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
  private:
	const Fixed x;
	const Fixed y;

  public:
	Point();
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	const Fixed &getX() const;
	const Fixed &getY() const;
};

#endif