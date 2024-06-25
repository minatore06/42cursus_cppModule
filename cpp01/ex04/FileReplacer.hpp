/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:50:53 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/10 12:18:27 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP
# include <string>
# include <iostream>
# include <fstream>

class FileReplacer
{
	private:
		std::string filename;
	public:
		FileReplacer();
		FileReplacer(std::string filename);
		~FileReplacer();
		int replace(std::string s1, std::string s2);
};

#endif