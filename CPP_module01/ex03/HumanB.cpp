/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:02:19 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 19:11:34 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his ";
    if (this->_weapon == NULL)
        std::cout << "hands" << std::endl;
    else
        std::cout << this->_weapon->getType() << std::endl;
}
