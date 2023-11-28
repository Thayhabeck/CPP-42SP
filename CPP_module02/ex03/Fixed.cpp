/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:26:39 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 21:02:19 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void)
{
    this->_fixedPointValue = 0;
}

// Int constructor
Fixed::Fixed(int const n)
{
    this->_fixedPointValue = n << this->_fractionalBits;
}

// Float constructor
Fixed::Fixed(float const n)
{
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

// Copy constructor
Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

// Destructor
Fixed::~Fixed(void)
{
    return ;
}

// Assignation operator overload
Fixed &Fixed::operator=(Fixed const &rhs)
{
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

// Arithmetic sum operator overload
Fixed Fixed::operator+(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

// Arithmetic subtraction operator overload
Fixed Fixed::operator-(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

// Arithmetic multiplication operator overload
Fixed Fixed::operator*(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

// Arithmetic division operator overload
Fixed Fixed::operator/(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

// Comparison bigger than operator overload
bool Fixed::operator>(Fixed const &rhs) const
{
    return (this->_fixedPointValue > rhs.getRawBits());
}

// Comparison smaller than operator overload
bool Fixed::operator<(Fixed const &rhs) const
{
    return (this->_fixedPointValue < rhs.getRawBits());
}

// Comparison bigger or equal than operator overload
bool Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_fixedPointValue >= rhs.getRawBits());
}

// Comparison smaller or equal than operator overload
bool Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_fixedPointValue <= rhs.getRawBits());
}

// Comparison equal operator overload
bool Fixed::operator==(Fixed const &rhs) const
{
    return (this->_fixedPointValue == rhs.getRawBits());
}

// Comparison different operator overload
bool Fixed::operator!=(Fixed const &rhs) const
{
    return (this->_fixedPointValue != rhs.getRawBits());
}

// Pre-increment operator overload
Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return (*this);
}

// Post-increment operator overload
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

// Pre-decrement operator overload
Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return (*this);
}

// Post-decrement operator overload
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

// Getter
int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

// Setter
void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

// Convert to float
float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

// Convert to int
int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

// Min function
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

// Min function const
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b ? a : b);
}

// Max function
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

// Max function const
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

// Output operator overload
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}

