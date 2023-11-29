/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:12:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/29 19:56:41 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------- SCARVTRAP TEST -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "ScavTrap a is created with name 'Spartano'" << std::endl;
    std::cout << "ScavTrap b is created with name 'Troiano'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    ScavTrap a("Spartano");
    ScavTrap b("Troiano");

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartano attacks Troiano" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troiano attacks Spartano" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartano repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    a.beRepaired(20);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartano attacks Troiano 50 times" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 48; i++)
    {
        a.attack(b.getName());
        b.takeDamage(a.getAttackDamage());
    }
    a.attack(b.getName());
    a.attack(b.getName());

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Troiano repairs himself with 20 hit points" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    b.beRepaired(20);

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Spartano and Troiano are destroyed" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    return (0);
}

