/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 11:56:21 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap diamond("diamond");
	DiamondTrap diamond2(diamond);
	DiamondTrap diamond3;
	diamond3 = diamond2;
	diamond.attack("target");
	diamond.takeDamage(5);
	diamond.beRepaired(5);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	return (0);
}