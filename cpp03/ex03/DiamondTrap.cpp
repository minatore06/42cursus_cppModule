/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:03 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 13:33:58 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), name("")
{
	ClapTrap::name = this->name + "_clap_name";
	this->energyPoints = 50;
	std::cout << "DiamondTrap " << this->name << ": default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	this->energyPoints = 50;
	std::cout << "DiamondTrap " << this->name << ": name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
	std::cout << "DiamondTrap " << this->name << ": copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << ": destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		ClapTrap::name = src.name + "_clap_name";
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}