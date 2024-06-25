/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:48:02 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/12 12:36:19 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->nbContacts = 0;
}

PhoneBook::~PhoneBook() {
    std::cout << "Distruttore" << std::endl;
}

std::string PhoneBook::truncate(std::string str, size_t w) const {
    std::string tmp;

    if (str.size() > w) {
        str.insert(w - 1, ".");
        tmp = str.substr(0, w);
        return (tmp);
    }
    return (str);
}

void PhoneBook::addContact(Contact contact) {
    this->contacts[this->nbContacts % 8] = contact;
    this->nbContacts++;
}

bool PhoneBook::printContact(int index) const {
    if (index < 0 || index > 7)
        return (false);
    if (this->contacts[index].getFirstName() == "")
        return (false);
    std::cout << "First name:     " << this->contacts[index].getFirstName() << std::endl;
    std::cout << "Last name:      " << this->contacts[index].getLastName() << std::endl;
    std::cout << "Nickname:       " << this->contacts[index].getNickname() << std::endl;
    std::cout << "Phone number:   " << this->contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->contacts[index].getSecret() << std::endl;
    return (true);
}

void PhoneBook::printContacts() const {
    std::string  tmp;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     INDEX|" << "FIRST NAME|" << " LAST NAME|" << "  NICKNAME|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i + 1;
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getFirstName(), 10);
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getLastName(), 10);
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getNickname(), 10);
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    
}

bool PhoneBook::isEmpty() const {
    if (this->nbContacts == 0)
        return (true);
    return (false);
}