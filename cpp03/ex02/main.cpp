/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 11:41:02 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	FragTrap Frag("Frag");
	FragTrap Frag2(Frag);
	FragTrap Frag3;
	Frag3 = Frag2;
	Frag.attack("target");
	Frag.takeDamage(5);
	Frag.beRepaired(5);
	Frag.highFivesGuys();
	return (0);
}