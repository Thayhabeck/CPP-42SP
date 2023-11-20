/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:00:04 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 14:38:47 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "------------------- TESTING HEAP ALLOCATION -------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Calling newZombie 'Zombiraldo'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    Zombie* zombie = newZombie("Zombiraldo");

	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Explicit Announce of 'Zombiraldo'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    zombie->announce();

	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Explicit Delete of 'Zombiraldo'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    delete zombie;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------- TESTING STACK ALLOCATION ------------------" << std::endl;
    std::cout << "------------------------ Function case ------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Calling randomChump 'Zombinelson'..." << std::endl;
    std::cout << "Implicit Announce of 'Zombinelson' in randomChump function..." << std::endl;
    std::cout << "Implicit Delete of 'Zombinelson' with the end of the function..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    randomChump("Zombinelson");

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------- TESTING STACK ALLOCATION ------------------" << std::endl;
    std::cout << "------------------------ Instance case ------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instance of Zombie 'Zombileudo'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    Zombie zombie2("Zombileudo");

	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Explicit Announce of 'Zombileudo'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    zombie2.announce();

	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Implicit Delete of 'Zombileudo' with the end of the program..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    
    return (0);
}
