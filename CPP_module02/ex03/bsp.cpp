/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:21:33 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 16:04:05 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Function to calculate the cross product
static Fixed    crossProduct(Point v1, Point v2, Point point)
{
    Fixed   x1 = v2.getX() - v1.getX();
    Fixed   y1 = v2.getY() - v1.getY();
    Fixed   x2 = point.getX() - v1.getX();
    Fixed   y2 = point.getY() - v1.getY();

    // Calculate the cross product
    Fixed cross = x1 * y2 - x2 * y1;

    return (cross);
}

// BSP function to check if a point is inside a triangle
bool    bsp(Point const a, Point const b, Point const c, Point const p)
{
    // Calculate the cross product for each side of the triangle and the point
    Fixed cross1 = crossProduct(a, b, p);
    Fixed cross2 = crossProduct(b, c, p);
    Fixed cross3 = crossProduct(c, a, p);

    // Verify if the point is inside the triangle
    return ((cross1 >= 0 && cross2 >= 0 && cross3 >= 0) || 
            (cross1 <= 0 && cross2 <= 0 && cross3 <= 0));
}
