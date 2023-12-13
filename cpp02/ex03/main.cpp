/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:04:40 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/13 15:34:27 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(30, 30);


	std::cout << "Point outside tringle, expected: false" << std::endl;
	bsp(a, b, c, point) ? std::cout << "Point is inside the triangle" << std::endl : std::cout << "Point is outside the triangle" << std::endl;	
	point = Point(10, 15);
	std::cout << "DEBUG: " << point.getX() << " " << point.getY() << std::endl;
	std::cout << "Point inside tringle, expected: true" << std::endl;
	bsp(a, b, c, point) ? std::cout << "Point is inside the triangle" << std::endl : std::cout << "Point is outside the triangle" << std::endl;
	point = Point(10, 30);
	std::cout << "Point on vertix, expected: false" << std::endl;
	bsp(a, b, c, point) ? std::cout << "Point is inside the triangle" << std::endl : std::cout << "Point is outside the triangle" << std::endl;
	point = Point(10, 0);
	std::cout << "Point on edge, expected: false" << std::endl;
	bsp(a, b, c, point) ? std::cout << "Point is inside the triangle" << std::endl : std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}