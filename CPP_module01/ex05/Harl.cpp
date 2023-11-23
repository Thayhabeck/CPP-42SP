/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:40:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/22 23:39:33 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << PURPLE << "Harl is here and will going to order!";
    std::cout << RESET << std::endl;
}

Harl::~Harl(void)
{
    std::cout << PURPLE << "Harl got angry and left complaining (as always)!";
    std::cout << RESET << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {
        "DEBUG", 
        "INFO", 
        "WARNING", 
        "ERROR"
    };
    void (Harl::*membFunctions[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*membFunctions[i])();
            return ;
        }
    }
    std::cout << PURPLE << "_[INVALID]_" << WHITE << std::endl;
    std::cout << "...[unavoidable complaints]...";
    std::cout << RESET << std::endl;
}

void    Harl::debug(void)
{
    std::cout << GREEN << "_[DEBUG]_" << WHITE << std::endl;
    std::cout << "I love having extra bacon for my" << std::endl;
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << RESET << std::endl;
}

void    Harl::info(void)
{
    std::cout << CYAN << "_[INFO]_" << WHITE << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void    Harl::warning(void)
{
    std::cout << YELLOW << "_[WARNING]_" << WHITE << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started ";
    std::cout << "working here last month." << RESET << std::endl;
}

void    Harl::error(void)
{
    std::cout << RED << "_[ERROR]_" << WHITE << std::endl;
    std::cout << "This is unacceptable," << std::endl;
    std::cout << "I want to speak to the manager now.";
    std::cout << RESET << std::endl;
}
