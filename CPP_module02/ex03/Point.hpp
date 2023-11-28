/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:17:37 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 16:02:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
    public:
        Point(void);
        Point(float const x, float const y);
        Point(Point const &src);
        ~Point(void);

        Point &operator=(Point const &rhs);

        Fixed getX(void) const;
        Fixed getY(void) const;


    private:
        Fixed const _x;
        Fixed const _y;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif