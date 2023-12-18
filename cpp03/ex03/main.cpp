/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/18 17:14:49 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void main()
{
	FragTrap Frag("Frag");
	FragTrap Frag2(Frag);
	FragTrap Frag3;
	Frag3 = Frag2;
	Frag.attack("target");
	Frag.takeDamage(5);
	Frag.beRepaired(5);
	Frag.highFivesGuys();
}