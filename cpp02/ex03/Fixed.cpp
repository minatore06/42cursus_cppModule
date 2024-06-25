/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:04:38 by scaiazzo          #+#    #+#             */
/*   Updated: 2023/12/13 15:29:00 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int value)
{
	this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << this->bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.getRawBits());
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}