/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:02:30 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 11:06:06 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Colors for output
const std::string BLUE = "\033[36m";
const std::string RESET = "\033[0m";

void subject_test(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
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
    std::cout << "The instance 'b' is created using the copy constructor" << std::endl;
    std::cout << "The instance 'b' is a copy of 'a'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed b(a);

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is created using the default constructor" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Fixed c;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is assigned to 'b' using the copy assignment operator" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    
    c = b;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'a' is printed using the getRawBits member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << a.getRawBits() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'b' is printed using the getRawBits member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << b.getRawBits() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instance 'c' is printed using the getRawBits member function" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    std::cout << c.getRawBits() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "The instances 'a', 'b' and 'c' are destroyed" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    return 0;
}

// Output:
// Default constructor called
// Copy constructor called
// Copy assignment operator called
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called

