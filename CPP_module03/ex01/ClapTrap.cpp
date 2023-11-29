/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:17:33 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/29 19:30:57 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unknown")
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << GREEN;
    std::cout << "ClapTrap '" << this->_name << "' was created with " << this->_hitPoints;
    std::cout << " hit points⚡, " << this->_energyPoints << " energy points🔋 and ";
    std::cout << this->_attackDamage << " attack damage 🗡️." << std::endl;
    std::cout << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << GREEN;
    std::cout << "ClapTrap '" << this->_name << "' was created with " << this->_hitPoints;
    std::cout << " hit points⚡, " << this->_energyPoints << " energy points🔋 and ";
    std::cout << this->_attackDamage << " attack damage 🗡️." << std::endl;
    std::cout << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << GREEN;
    std::cout << "A copy of ClapTrap '" << this->_name << "' was created!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &assign)
{
    this->_name = assign._name;
    this->_hitPoints = assign._hitPoints;
    this->_energyPoints = assign._energyPoints;
    this->_attackDamage = assign._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << RED;
    std::cout << "ClapTrap '" << this->_name << "' was destroyed 🫥";
    std::cout << RESET << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (this->_name);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}

void    ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints == 0)
    {
        this->_energyPoints = 0;
        std::cout << YELLOW;
        std::cout << "ClapTrap " << this->_name;
        std::cout << " has no energy points🔋 to attack!" << std::endl;
        std::cout << RESET << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << BLUE;
    std::cout << "ClapTrap " << this->_name << " attacks🗡️  " << target;
    std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has now ";
    std::cout << this->_energyPoints << " energy points🔋!" << std::endl;
    if (this->_energyPoints == 0)
    {
        std::cout << YELLOW << "ClapTrap " << this->_name;
        std::cout << " is so tired that right now 😴!" << std::endl;
    }
    std::cout << std::endl << RESET << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        this->_hitPoints = 0;
        std::cout << RED;
        std::cout << "ClapTrap " << this->_name << " can't take damage because it";
        std::cout << " is already dead! 💀" << std::endl;
        std::cout << RESET << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    std::cout << YELLOW;
    std::cout << "ClapTrap " << this->_name << " take " << amount;
    std::cout << " points of damage 🤕!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has now ";
    std::cout << this->_hitPoints << " hit points⚡!" << std::endl;
    if (this->_hitPoints <= 0)
    {
        std::cout << RED << "ClapTrap " << this->_name << " is dead! 💀" << std::endl;
        this->_hitPoints = 0;
    }
    std::cout << RESET << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << YELLOW;
        std::cout << "ClapTrap " << this->_name << " can't be repaired because it";
        std::cout << " has no energy points🔋!" << std::endl;
        std::cout << RESET;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << BLUE;
        std::cout << "ClapTrap " << this->_name << " return to life! 👻";
        std::cout << std::endl;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << GREEN;
    std::cout << "ClapTrap " << this->_name << " be repaired 🩹 with ";
    std::cout << amount << " hit points⚡!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has now ";
    std::cout << this->_hitPoints << " hit points⚡ and ";
    std::cout << this->_energyPoints << " energy points🔋!" << std::endl;
    if (this->_energyPoints == 0)
    {
        std::cout << YELLOW << "ClapTrap " << this->_name;
        std::cout << " is so tired that right now 😴!" << std::endl;
    }
    std::cout << RESET << std::endl;
}
