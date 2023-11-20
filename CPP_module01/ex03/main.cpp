/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:04:15 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 19:13:13 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

// Colors for output
const std::string RESET = "\033[0m";
const std::string BLUE = "\033[36m";

int main(void)
{
    std::cout << BLUE << std::endl;
    std::cout << "------------------ UNNECESSARY VIOLENCE TEST ------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    {
        std::cout << "-------------------- Weapon as a Reference --------------------" << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Instance a Weapon of type 'crude spiked club'..." << std::endl;
        std::cout << "Instance a HumanA named Bob, with a crude spiked club Weapon..." << std::endl;
        std::cout << "HumanA Bob attack first time with the instanciated Weapon..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;

        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();

        std::cout << BLUE;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Weapon type is changed to 'some other type of club' with setType..." << std::endl;
        std::cout << "HumanA Bob attack again, with the Wheapon type changed..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;

        club.setType("some other type of club");
        bob.attack();

        std::cout << BLUE;
        std::cout << "---------------------------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "--------------------- Weapon as a Pointer ---------------------" << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Instance a Weapon of type 'crude spiked club'..." << std::endl;
        std::cout << "Instance a HumanB named Jim, with no Weapon..." << std::endl;
        std::cout << "HumanB Jim attack first time with no Weapon..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;
        
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();

        std::cout << BLUE;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Set the Weapon of Jim to the instanciated Weapon 'crude spiked club'..." << std::endl;
        std::cout << "HumanB Jim attack again with the setted Weapon..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;

        jim.setWeapon(club);
        jim.attack();

        std::cout << BLUE;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Weapon type is changed to 'some other type of club' with setType..." << std::endl;
        std::cout << "HumanB Jim attack again, with the Wheapon type changed..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;

        club.setType("some other type of club");
        jim.attack();

        std::cout << BLUE;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << RESET;
    }
}
