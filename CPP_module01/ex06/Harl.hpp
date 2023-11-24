/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:33:34 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 20:39:14 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

//Colors as global variables
const std::string RESET = "\033[0m";
const std::string WHITE = "\033[0;1m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string CYAN = "\033[36;1m";
const std::string PURPLE = "\033[35;1m";

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    harlFilter(int i, void (Harl::*membFunctions[4])(void));

    public:
        Harl(void);
        ~Harl(void);

        void    complain(std::string level);
};

#endif
