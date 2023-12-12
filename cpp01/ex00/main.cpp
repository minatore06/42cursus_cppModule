/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:10:46 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/12 12:58:25 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie = newZombie("Franco");
    zombie->announce();
    delete zombie;
    randomChump("Carlo");
    return (0);
}