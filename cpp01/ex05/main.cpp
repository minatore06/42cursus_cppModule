/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:18:46 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/10 14:58:45 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

int main( void )
{
	Harl harl;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::cout << "Harl always complains, look at him go!" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			harl.complain(levels[0]);
		else if (i % 3 == 0)
			harl.complain(levels[2]);
		else if (i % 5 == 0)
			harl.complain(levels[3]);
		else
			harl.complain(levels[1]);
	}
	return 0;
}
