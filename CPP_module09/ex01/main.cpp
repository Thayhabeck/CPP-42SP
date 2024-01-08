/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:58:38 by thabeck-          #+#    #+#             */
/*   Updated: 2024/01/08 12:45:43 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    RPN rpn;

    if (argc != 2) {
        std::cout << RED "Error: invalid number of arguments."<< std::endl;
        std::cout << "Usage: ./RPN \"<expression>\"" << RESET << std::endl;
        return (1);
    }
    try {
        std::cout << BLUE << rpn.calculate(argv[1]) << RESET << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    return (0);
}
