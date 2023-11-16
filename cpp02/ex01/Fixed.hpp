/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:04:37 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/11/16 17:11:40 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &other );
		~Fixed();
		Fixed& operator=(const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif