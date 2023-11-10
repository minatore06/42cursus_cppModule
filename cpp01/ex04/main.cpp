/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:41:30 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/10 12:28:44 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "FileReplacer.hpp"

int main(int argc, char const *argv[])
{
	FileReplacer fr;
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
		return (0);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	fr = FileReplacer(filename);
	fr.replace(s1, s2);
	return (0);
}
