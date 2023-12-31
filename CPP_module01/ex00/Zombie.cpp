/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:55:17 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 13:56:35 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor with name
Zombie::Zombie( std::string name )
{
    this->_name = name;
    std::cout << GREEN << this->_name;
    std::cout << " is alive (or not)" << RESET << std::endl;
}

//Destructor
Zombie::~Zombie()
{
    std::cout << RED << this->_name;
    std::cout << " is dead (again)" << RESET << std::endl;
}

//Member function to announce the zombie
void    Zombie::announce()
{
    std::cout << BLUE << this->_name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
