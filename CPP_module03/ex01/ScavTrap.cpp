/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:48:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/29 19:42:28 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << RED;
    std::cout << "ScavTrap was created inheriting from ClapTrap with ";
    std::cout << this->_hitPoints << " hit points⚡, " << this->_energyPoints;
    std::cout << " energy points🔋 and " << this->_attackDamage << " attack damage 🗡️.";
    std::cout << RESET;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << GREEN;
    std::cout << "ScavTrap '" << this->_name << "' was created from ClapTrap with ";
    std::cout << this->_hitPoints << " hit points⚡, " << this->_energyPoints;
    std::cout << " energy points🔋 and " << this->_attackDamage << " attack damage 🗡️.";
    std::cout << std::endl << RESET << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << GREEN;
    std::cout << "A copy of ScavTrap '" << this->_name << "' was created!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &assign)
{
    this->_name = assign._name;
    this->_hitPoints = assign._hitPoints;
    this->_energyPoints = assign._energyPoints;
    this->_attackDamage = assign._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << RED;
    std::cout << "ScavTrap '" << this->_name << "' was destroyed 🫥";
    std::cout << RESET << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << YELLOW;
        std::cout << "ScavTrap '" << this->_name;
        std::cout <<"' has no energy points🔋 to attack !" << std::endl;
        std::cout << RESET << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << BLUE;
    std::cout << "ScavTrap " << this->_name << " attacks🗡️  " << target;
    std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "ScavTrap " << this->_name << " has now ";
    std::cout << this->_energyPoints << " energy points🔋!" << std::endl;
   if (this->_energyPoints == 0)
    {
        std::cout << YELLOW << "ScavTrap " << this->_name;
        std::cout << " is so tired that right now 😴!" << std::endl;
    }
    std::cout << RESET << std::endl;
}

std::string ScavTrap::getName(void)
{
    return (this->_name);
}

int ScavTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}
