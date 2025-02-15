/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <aquissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:28:22 by aquissan          #+#    #+#             */
/*   Updated: 2025/02/01 10:45:23 by aquissan         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_H
# define FIXED_H

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int fixe;
	static const int bits = 8;

  public:
	Fixed();
	Fixed(const float num);
	Fixed(const Fixed &other);
	Fixed(const int num);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &FP);
#endif