/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:26:39 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 20:37:56 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    // n << this->_fractionalBits means n * 2^8 (8 is the number of fractional bits)
    // Exemple: 2.5 in binary is 10.1, so 2.5 * 2^8 = 640
    this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    // roundf means round to nearest integer value
    // Exemple: 42.42f * 2^8 = 10814.56, so roundf(10814.56) = 10815
    // 10814 in binary is 10101000101110, so 42.42 in binary is 101010001.01110
    // 101010001.01110 in decimal é 42.421875
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    // 1 << this->_fractionalBits means 1 * 2^8 (8 is the number of fractional bits)
    // Exemple: 1 * 2^8 = 256
    // Exemple: 10814 / 256 = 42.4219
    return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    // this->_fixedPointValue >> this->_fractionalBits 
    // means this->_fixedPointValue / 2^8 (8 is the number of fractional bits)
    // Exemple: 10814 / 256 = 42
    return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}
