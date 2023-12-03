/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:15:53 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/02 23:55:39 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_hitPoints = F_HIT_POINTS;
    this->_energyPoints = F_ENERGY_POINTS;
    this->_attackDamage = F_ATTACK_DAMAGE;
    std::cout << RED;
    std::cout << "FragTrap was created inheriting from ClapTrap with ";
    std::cout << this->_hitPoints << " hit points⚡, " << this->_energyPoints;
    std::cout << " energy points🔋 and " << this->_attackDamage << " attack damage 🗡️.";
    std::cout << std::endl << RESET;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = F_HIT_POINTS;
    this->_energyPoints = F_ENERGY_POINTS;
    this->_attackDamage = F_ATTACK_DAMAGE;
    std::cout << GREEN;
    std::cout << "FragTrap '" << this->_name << "' was created from ClapTrap with ";
    std::cout << this->_hitPoints << " hit points⚡, " << this->_energyPoints;
    std::cout << " energy points🔋 and " << this->_attackDamage << " attack damage 🗡️.";
    std::cout << std::endl << RESET;
    return ;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << GREEN;
    std::cout << "A copy of FragTrap '" << this->_name << "' was created!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &assign)
{
    this->_name = assign._name;
    this->_hitPoints = assign._hitPoints;
    this->_energyPoints = assign._energyPoints;
    this->_attackDamage = assign._attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << RED;
    std::cout << "FragTrap '" << this->_name << "' was destroyed 🫥";
    std::cout << RESET << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << BLUE;
    std::cout << "FragTrap '" << this->_name << "' wants to high five 🙌" << std::endl;
    std::cout << RESET << std::endl;
}

std::string FragTrap::getName(void)
{
    return (this->_name);
}

int FragTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}
