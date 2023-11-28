/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:34:35 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 16:05:46 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Colors for output
const std::string BLUE = "\033[36m";
const std::string RESET = "\033[0m";

int main(void)
{

    std::cout << BLUE << std::endl;
    std::cout << "-------------------------- BSP TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Point a is created with coordinates (1, 1)" << std::endl;
    std::cout << "Point b is created with coordinates (4, 4)" << std::endl;
    std::cout << "Point c is created with coordinates (4, 1)" << std::endl;
    std::cout << "Point 'point' is created with coordinates (3, 3)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Point   a1(1.0f, 1.0f);
    Point   b1(4.0f, 4.0f);
    Point   c1(4.0f, 1.0f);
    Point   point1(3.0f, 3.0f);
    std::cout << "a = " << a1.getX() << ", " << a1.getY() << std::endl;
    std::cout << "b = " << b1.getX() << ", " << b1.getY() << std::endl;
    std::cout << "c = " << c1.getX() << ", " << c1.getY() << std::endl;
    std::cout << "point = " << point1.getX() << ", " << point1.getY() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Checking if point is inside the triangle (a, b, c)..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "bsp(a[1,1], b[4,4], c[4,1], point[3,3]) = ";
    if (bsp(a1, b1, c1, point1))
        std::cout << "true" << std::endl << "The point is inside the triangle." << std::endl;
    else
        std::cout << "false" << std::endl << "The point is outside the triangle." << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Point a is created with coordinates (0, 0)" << std::endl;
    std::cout << "Point b is created with coordinates (4, 0)" << std::endl;
    std::cout << "Point c is created with coordinates (2, 4)" << std::endl;
    std::cout << "Point 'point' is created with coordinates (3.5, 3.5)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Point a2(0.0f, 0.0f);
    Point b2(4.0f, 0.0f);
    Point c2(2.0f, 4.0f);
    Point point2(3.5f, 3.5f);
    std::cout << "a = " << a2.getX() << ", " << a2.getY() << std::endl;
    std::cout << "b = " << b2.getX() << ", " << b2.getY() << std::endl;
    std::cout << "c = " << c2.getX() << ", " << c2.getY() << std::endl;
    std::cout << "point = " << point2.getX() << ", " << point2.getY() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Checking if point is inside the triangle (a, b, c)..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "bsp(a[0,0], b[4,0], c[2,4], point[3.5,3.5]) = ";
    if (bsp(a2, b2, c2, point2))
        std::cout << "true" << std::endl << "The point is inside the triangle." << std::endl;
    else
        std::cout << "false" << std::endl << "The point is outside the triangle." << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "------------------------ END OF TESTS -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    
    return (0);
}
