/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:36:29 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/10/25 14:21:09 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int nbContacts;
        std::string truncate(std::string str, size_t w) const;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(Contact contact);
        bool printContact(int index) const;
        void printContacts() const;
        bool isEmpty() const;
};

#endif