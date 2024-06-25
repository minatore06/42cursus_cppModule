/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:42:39 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 12:11:54 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << ": default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << ": name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "ClapTrap " << this->name << ": copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << ": destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(std::string const& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else if (this->hitPoints < 1)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 1)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " now has " << this->hitPoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->name << " now has " << this->energyPoints << " energy points left!" << std::endl;
		this->hitPoints += amount;
	} else if (this->hitPoints < 1)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}
