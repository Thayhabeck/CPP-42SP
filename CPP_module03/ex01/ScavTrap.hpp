/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:46:00 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/29 18:59:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        ScavTrap(void);
    public:
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