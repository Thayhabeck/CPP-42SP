/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:12:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/02 18:08:51 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------- SCARVTRAP TEST -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "ClapTrap a is created with name 'Spartan'" << std::endl;
    std::cout << "ScavTrap b is created with name 'Troian'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    ClapTrap a("👏 Spartan");
    ScavTrap b("🔍 Troian");

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan attacks Troian" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian attacks Spartan" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.beRepaired(20);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan attacks Troian 10 times" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
    }
    a.attack(b.getName());
    a.attack(b.getName());


    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.beRepaired(20);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troian give up from war, and he is now a gatekeeper" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.guardGate();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartan and Troian are destroyed" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    return (0);
}

