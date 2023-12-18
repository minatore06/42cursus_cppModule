/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:04:36 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/18 16:06:24 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void main()
{
	ClapTrap clap("Clap");
	ClapTrap clap2(clap);
	ClapTrap clap3;
	clap3 = clap2;
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(5);
}