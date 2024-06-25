/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:08:16 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/12 12:36:27 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

int main(void)
{
    PhoneBook phoneBook;
    Contact contact;
    std::string input;
    char *err;
    int index;

    while (1)
    {
        do {
            std::cout << "Select the desired operation (ADD, SEARCH, EXIT): " << std::flush;
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(0);
            if (input != "ADD" && input != "SEARCH" && input != "EXIT")
                std::cout << "Invalid operation" << std::endl;
        } while (input != "ADD" && input != "SEARCH" && input != "EXIT");
        if (input == "ADD"){
            do {
                std::cout << "Insert the first name: " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                if (!input.empty())
                    break;
            } while (1);
            contact.setFirstName(input);
            
            do {
                std::cout << "Insert the last name: " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                if (!input.empty())
                    break;
            } while (1);
            contact.setLastName(input);

            do {
                std::cout << "Insert the nickname: " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                if (!input.empty())
                    break;
            } while (1);
            contact.setNickname(input);

            do {
                std::cout << "Insert the phone number: " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                std::strtol(input.c_str(), &err, 10);
                if (input != err && *err == '\0')
                    break;
                std::cout << "Invalid phone number" << std::endl;
            } while (1);
            contact.setPhoneNumber(input);

            do {
                std::cout << "Insert the darkest secret: " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                if (!input.empty())
                    break;
            } while (1);
            contact.setSecret(input);
            phoneBook.addContact(contact);
        } else if (input == "SEARCH") {
            phoneBook.printContacts();
            if (phoneBook.isEmpty()) {
                std::cout << "No contacts present, please insert one first." << std::endl;
                continue;
            }
            do
            {
                std::cout << "Please select the index of the contact you want to visualize (1-8): " << std::flush;
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(0);
                index = std::strtol(input.c_str(), &err, 10);
                if ((input != err && *err == '\0') && phoneBook.printContact(index - 1))
                    break;
                else
                    std::cout << "Invalid index" << std::endl;
            } while (index < 1 || index > 8);
        } else if (input == "EXIT") {
            break;
        }
    }
    return (0);
}