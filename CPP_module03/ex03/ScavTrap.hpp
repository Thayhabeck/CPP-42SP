/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:46:00 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/02 23:54:14 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define S_HIT_POINTS 100
#define S_ENERGY_POINTS 50
#define S_ATTACK_DAMAGE 20

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &copy);
        ~ScavTrap(void);
        
        ScavTrap &operator=(ScavTrap const &assign);

        std::string getName(void);
        int getAttackDamage(void);

        void    attack(std::string const &target);
        void    guardGate(void);
};

#endif