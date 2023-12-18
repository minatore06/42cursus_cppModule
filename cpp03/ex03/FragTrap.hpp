/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:48:11 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/18 17:37:30 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
# define FragTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	~FragTrap();
	FragTrap& operator=(const FragTrap& src);
	void highFivesGuys( void );
};

#endif