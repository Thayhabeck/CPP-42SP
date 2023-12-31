/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:59:36 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/23 16:24:09 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED "Error: wrong number of arguments" << std::endl;
        std::cout << "Usage: ./convert [value]" RESET << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}
