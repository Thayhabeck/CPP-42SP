/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:30:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 20:56:43 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Colors for output
const std::string BLUE = "\033[36m";
const std::string RESET = "\033[0m";

void subject_test(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
}

int main(void)
{
    std::cout << BLUE << std::endl;
    std::cout << "------------------------ SUBJECT TEST -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The subject test is being executed..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    subject_test();
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    return (0);
}

// Expected output:
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016