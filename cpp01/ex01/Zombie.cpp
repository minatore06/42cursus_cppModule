/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:03:22 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/10/31 15:10:02 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie( std::string name ) : name(name)
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << name << std::endl;
    return ;
}

void Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}