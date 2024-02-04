/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:11:29 by thabeck-          #+#    #+#             */
/*   Updated: 2024/02/04 13:53:23 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << RED "Error: invalid number of arguments." RESET << std::endl;
        return (1);
    } else {
        try {
            BitcoinExchange exchange;
            exchange.readInput(argv[1]);  
        } catch (std::exception &e) {
            std::cerr << RED "Error: " << e.what() << RESET << std::endl;
        }   
    }
    return (0);
}