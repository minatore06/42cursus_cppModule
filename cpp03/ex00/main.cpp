/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 11:41:33 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("Clap");
	ClapTrap clap2(clap);
	ClapTrap clap3;
	clap3 = clap2;
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(5);
	return (0);
}