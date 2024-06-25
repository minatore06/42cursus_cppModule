/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:15:40 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/13 15:43:58 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		const_cast<Fixed&>(this->x) = other.getX();
		const_cast<Fixed&>(this->y) = other.getY();
	}
	return (*this);
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}