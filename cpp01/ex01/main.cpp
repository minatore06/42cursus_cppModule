/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:26:24 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/07 13:25:30 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main( void )
{
    Zombie *horde;
    std::string input;
    int n;
    char *err;

    do
    {
        std::cout << "How many zombies do you want to create?" << std::flush;
        getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        n = std::strtol(input.c_str(), &err, 10);
        if (n < 0) {
            std::cout << "Obviously you can't have a negative amount of zombies" << std::endl;
            continue;
        }
        if (input != err && *err == '\0')
            break;
        std::cout << "Invalid input, expecting a number" << std::endl;
    } while (1);

    do
    {
        std::cout << "How do you want to call your zombies?" << std::flush;
        getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (!input.empty())
            break;
    } while (1);
    horde = zombieHorde(n, input);

    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete[](horde);

    return (0);
}