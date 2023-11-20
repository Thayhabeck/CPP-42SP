/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:46:53 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 14:08:11 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;

    std::cout << std::endl;
    std::cout << "-------------------------- MAIN TEST --------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating zombieHorde whith " << N << " zombies..." << std::endl;
    std::cout << "Setting name for all " << N << " zombies in zombieHorde..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    Zombie* horde = zombieHorde(N, "Zombileu");

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Calling announce function for all zombieHorde zombies..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        horde[i].announce();
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Deleting all zombieHorde zombies at same time..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    delete [] horde;

    std::cout << "---------------------------------------------------------------" << std::endl;
    return (0);
}