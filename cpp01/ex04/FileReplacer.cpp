/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:50:44 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/12 16:17:08 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer() : filename("")
{
}

FileReplacer::FileReplacer(std::string filename) : filename(filename)

{
}

FileReplacer::~FileReplacer()
{
}

int FileReplacer::replace(std::string s1, std::string s2)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string line;
	std::string str;
	size_t	pos;
	int	i;

	ifs.open(this->filename.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return (-1);
	}
	while (std::getline(ifs, line))
	{
		i = 0;
		if (!ifs.eof() && !ifs.fail())
			line.append("\n");
		pos = line.find(s1, i);
		while (pos != std::string::npos)
		{
			str.append(line.substr(i, pos - i));
			str.append(s2);
			i = pos + s1.length();
			pos = line.find(s1, i);
		}
		str.append(line.substr(i, line.length()));
	}
	if (str.length() > 0) {
		ofs.open((this->filename + ".replace").c_str());
		if (!ofs.is_open())
		{
			ifs.close();
			std::cout << "Error: could not create file" << std::endl;
			return (-1);
		}
		ofs << str;
	} else
	{
		std::cout << "Error: file is empty" << std::endl;
		return (-1);
	}
	
	ifs.close();
	ofs.close();
	return (0);
}