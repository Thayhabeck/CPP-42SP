/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:12:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/02 19:53:08 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------- SCARVTRAP TEST -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "ClapTrap a is created with name 'Spartan'" << std::endl;
    std::cout << "ScavTrap b is created with name 'Troian'" << std::endl;
    std::cout << "FragTrap c is created with name 'Persian'" << std::endl;
    std::cout << "DiamondTrap d is created with name 'Roman'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    ClapTrap a("👏 Spartan");
    ScavTrap b("🔍 Troian");
    FragTrap c("💣 Persian");
    DiamondTrap d("💎 Roman");

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan attacks Troian" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan attacks Persian" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.attack(c.getName());
    c.takeDamage(a.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian attacks Spartan" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Roman attacks Troian" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    d.attack(b.getName());
    b.takeDamage(d.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.beRepaired(20);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Roman repairs himself with 30 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    d.beRepaired(30);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Roman attacks Troian 5 times" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        d.attack(b.getName());
        b.takeDamage(d.getAttackDamage());
    }
    d.attack(b.getName());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.beRepaired(30);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian give up from war, and he is now a gatekeeper" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.guardGate();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Persian are happy and he is now a high five guy" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    c.highFivesGuys();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Roman presents himself" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    d.whoAmI();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan, Troian and Persian are destroyed" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    return (0);
}

