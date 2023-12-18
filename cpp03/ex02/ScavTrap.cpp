/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:41:20 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/18 17:10:12 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << this->name << ": default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->name << ": name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->name << ": copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << ": destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
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

void ScavTrap::attack(std::string const& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else if (this->hitPoints < 1)
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered Gate keeper mode" << std::endl;
}