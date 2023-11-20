/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:55:17 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 11:14:44 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->_name = name;
    std::cout << GREEN << this->_name;
    std::cout << " is alive (or not)" << RESET << std::endl;
}

Zombie::~Zombie()
{
    std::cout << RED << this->_name;
    std::cout << " is dead (again)" << RESET << std::endl;
}

void    Zombie::announce()
{
    std::cout << BLUE << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
