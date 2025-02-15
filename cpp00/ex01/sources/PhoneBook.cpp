/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:54:15 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/17 10:54:16 by aquissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void PhoneBook::set_index(int flag)
{
    if (flag == 0)
    {
        this->actual_index = 0;
        this->length = 0;
    }
    else
    {
        if (this->length < 8)
            this->length += 1;
    }
}
void		PhoneBook::set_new(Contact contact)
{
    this->contacts[this->actual_index] = contact;
    this->actual_index += 1;
    if (this->actual_index == 8)
        this->actual_index = 0;

}

t_contact	PhoneBook::get_contact(int index)
{
    
    if (index < 8)
        return (this->contacts[index].get_contact());
    else
        return ((t_contact){0, NULL, NULL, NULL, NULL, NULL});
}