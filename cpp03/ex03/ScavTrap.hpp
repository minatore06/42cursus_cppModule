/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:17:26 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/22 11:53:57 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& src);
	void attack(std::string const& target);
	void guardGate();
};

#endif