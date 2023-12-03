/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:13:34 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 17:34:53 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define F_HIT_POINTS 100
#define F_ENERGY_POINTS 100
#define F_ATTACK_DAMAGE 30

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &copy);
        ~FragTrap(void);
        
        FragTrap &operator=(FragTrap const &assign);

        std::string getName(void);
        int getAttackDamage(void);

        void    highFivesGuys(void);
};

#endif
