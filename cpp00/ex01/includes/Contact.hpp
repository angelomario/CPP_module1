/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:44:55 by aquissan          #+#    #+#             */
/*   Updated: 2025/01/17 10:44:58 by aquissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

typedef struct s_ctact
{
    int index;
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string number;
    std::string darkestsecret;
}   t_contact;

class Contact
{
    private:
        int index;
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string darkestsecret;
        std::string number;

    public:
        void    set_contact(t_contact ctact);
        t_contact    get_contact(void);

};

#endif
