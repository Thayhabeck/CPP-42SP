/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:30:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 19:53:30 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Colors for output
const std::string BLUE = "\033[36m";
const std::string RESET = "\033[0m";

void subject_test(void)
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
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
    std::cout << "------------------- TEST WITH DESCRIPTION ---------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'a' is created using the default constructor" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed a;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'b' is created using the int constructor" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed b(10);

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is created using the float constructor" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed c(42.42f);

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'd' is created using the copy constructor" << std::endl;
    std::cout << "The instance 'd' is a copy of 'b'" << std::endl;
    std::cout << "The instance 'b' is assigned to 'd' using the copy assignment operator" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed d(b);

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'a' is assigned to a new value using the float constructor" << std::endl;
    std::cout << "The new Fixed instance is assigned to 'a' using the copy assignment operator" << std::endl;
    std::cout << "The new instance will be destroyed at the end of this scope" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    a = Fixed( 1234.4321f );

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'a' is printed using the insertion operator" << std::endl;
    std::cout << "The insertion operator is overloaded to print the float value" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "a is " << a << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'b' is printed using insertion operator" << std::endl;
    std::cout << "The insertion operator is overloaded to print the float value" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "b is " << b << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is printed using the insertion operator" << std::endl;
    std::cout << "The insertion operator is overloaded to print the int value" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "c is " << c << std::endl;
    
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'd' is printed using the insertion operator" << std::endl;
    std::cout << "The insertion operator is overloaded to print the int value" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "d is " << d << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'a' is printed using the toInt member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'b' is printed using the toInt member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is printed using the toInt member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'd' is printed using the toInt member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instances 'a', 'b', 'c' and 'd' are destroyed" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    return (0);
}

// Expected output:
// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called