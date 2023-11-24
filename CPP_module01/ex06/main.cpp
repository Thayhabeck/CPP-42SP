/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:18:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 20:34:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED << "Error: Invalid number of arguments!" << WHITE;
        std::cout << std::endl;
        std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]";
        std::cout << RESET << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}