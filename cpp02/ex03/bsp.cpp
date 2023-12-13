/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:15:43 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/13 15:28:09 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC, areaPAB, areaPBC, areaPAC;

	areaABC = (a.getX() * b.getY() + a.getY() * c.getX() + b.getX() * c.getY()) - (a.getY() * b.getX() + a.getX() * c.getY() + b.getY() * c.getX());
	areaABC < 0 ? areaABC = areaABC * -1 / 2 : areaABC = areaABC / 2;
	areaPAB = (a.getX() * b.getY() + a.getY() * point.getX() + b.getX() * point.getY()) - (a.getY() * b.getX() + a.getX() * point.getY() + b.getY() * point.getX());
	areaPAB < 0 ? areaPAB = areaPAB * -1 / 2 : areaPAB = areaPAB / 2;
	areaPBC = (point.getX() * b.getY() + point.getY() * c.getX() + b.getX() * c.getY()) - (point.getY() * b.getX() + point.getX() * c.getY() + b.getY() * c.getX());
	areaPBC < 0 ? areaPBC = areaPBC * -1 / 2 : areaPBC = areaPBC / 2;
	areaPAC = (a.getX() * point.getY() + a.getY() * c.getX() + point.getX() * c.getY()) - (a.getY() * point.getX() + a.getX() * c.getY() + point.getY() * c.getX());
	areaPAC < 0 ? areaPAC = areaPAC * -1 / 2 : areaPAC = areaPAC / 2;

	if (areaPAB == 0 || areaPBC == 0 || areaPAC == 0)
		return (false);
	if (areaABC == areaPAB + areaPBC + areaPAC)
		return (true);
	return (false);
}