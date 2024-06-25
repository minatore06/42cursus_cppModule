/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:18:46 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/10 15:35:22 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

int main( int argc, char **argv )
{
	Harl harl;
	int pos;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (argc != 2)
		return (1);
	pos = -1;
	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
			pos = i;
	}
	switch (pos)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
