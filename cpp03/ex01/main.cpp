/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/18 16:44:44 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void main()
{
	ScavTrap scav("scav");
	ScavTrap scav2(scav);
	ScavTrap scav3;
	scav3 = scav2;
	scav.attack("target");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();
}