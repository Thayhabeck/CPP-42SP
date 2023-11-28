/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:20:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 14:09:28 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
    return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    return ;
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{
    *this = src;
}

Point::~Point(void)
{
    return ;
}

Point &Point::operator=(Point const &rhs)
{
    (void)rhs;
    return (*this);
}

Fixed Point::getX(void) const
{
    return (this->_x);
}

Fixed Point::getY(void) const
{
    return (this->_y);
}
