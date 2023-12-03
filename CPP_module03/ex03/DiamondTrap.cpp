/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:30:59 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 00:14:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = "Unknown";
    this->_hitPoints = F_HIT_POINTS;
    this->_energyPoints = S_ENERGY_POINTS;
    this->_attackDamage = F_ATTACK_DAMAGE;
    std::cout << GREEN;
    std::cout << "DiamondTrap '" << this->_name << "' was created from ClapTrap, ";
    std::cout << "ScavTrap and FragTrap with " << this->_hitPoints << " hit points⚡, ";
    std::cout << this->_energyPoints << " energy points🔋 and " << this->_attackDamage;
    std::cout << " attack damage 🗡️." << std::endl;
    std::cout << RESET;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->_hitPoints = F_HIT_POINTS;
    this->_energyPoints = S_ENERGY_POINTS;
    this->_attackDamage = F_ATTACK_DAMAGE;
    std::cout << GREEN;
    std::cout << "DiamondTrap '" << this->_name << "' was created from ClapTrap, ";
    std::cout << "ScavTrap and FragTrap with " << this->_hitPoints << " hit points⚡, ";
    std::cout << this->_energyPoints << " energy points🔋 and " << this->_attackDamage;
    std::cout << " attack damage 🗡️." << std::endl;
    std::cout << RESET;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << GREEN;
    std::cout << "A copy of DiamondTrap '" << this->_name << "' was created!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &assign)
{
    this->_name = assign._name;
    this->_hitPoints = assign._hitPoints;
    this->_energyPoints = assign._energyPoints;
    this->_attackDamage = assign._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED;
    std::cout << "DiamondTrap '" << this->_name << "' was destroyed 🫥";
    std::cout << RESET << std::endl;
}

std::string DiamondTrap::getName(void)
{
    return (this->_name);
}

std::string DiamondTrap::getClapName(void)
{
    return (ClapTrap::_name);
}

int DiamondTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << BLUE;
    std::cout << "Hi, i'm DiamondTrap " << this->_name << " 👋";
    std::cout << " and my ClapTrap 👏  name is " << ClapTrap::_name << " !";
    std::cout << std::endl << "I'm a ScavTrap 🔍  and FragTrap 💣  too!";
    std::cout << std::endl << RESET << std::endl;
}
