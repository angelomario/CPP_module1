/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:54:04 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/17 10:54:06 by aquissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void    Contact::set_contact(t_contact ctact)
{
    this->index = ctact.index;
    this->name = ctact.name;
    this->nickname = ctact.nickname;
    this->lastname = ctact.lastname;
    this->darkestsecret = ctact.darkestsecret;
    this->number = ctact.number;
}

t_contact    Contact::get_contact(void)
{
    t_contact contact;

    contact.index = this->index;
    contact.name = this->name;
    contact.lastname = this->lastname;
    contact.nickname = this->nickname;
    contact.darkestsecret = this->darkestsecret;
    contact.number = this->number;
    return (contact);
}


