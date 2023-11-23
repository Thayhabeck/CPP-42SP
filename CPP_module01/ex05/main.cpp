/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:18:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 00:06:51 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Colors for output
const std::string BLUE = "\033[36m";

int main(void)
{
    std::cout << BLUE << std::endl;
    std::cout << "----------------------- HARL 2.0 TEST -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl is created..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Harl harl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl complain with DEBUG..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    harl.complain("DEBUG");
    
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl complain with INFO..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    harl.complain("INFO");

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl complain with WARNING..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    harl.complain("WARNING");

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl complain with ERROR..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    harl.complain("ERROR");

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl makes an invalid complaint..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    harl.complain("INVALID");

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Harl is destroyed with the end of the program..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    
    return (0);
}