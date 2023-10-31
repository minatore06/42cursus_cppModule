/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:00:45 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/10/31 15:28:43 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif