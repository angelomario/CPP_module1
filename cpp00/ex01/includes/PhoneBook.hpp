/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:27:34 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/17 10:27:36 by aquissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "../includes/Contact.hpp"

class PhoneBook
{
  private:
	int actual_index;
	int length;
	Contact contacts[8];

  public:
	void set_index(int flag);
	void set_new(Contact contact);
	t_contact get_contact(int index);
};

#endif
