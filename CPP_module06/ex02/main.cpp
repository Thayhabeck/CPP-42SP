/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:03:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/25 21:39:35 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    std::cout << "--------------------- DYNAMIC CAST TEST -----------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Test " << i + 1 << "..." << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Generating random class..." << std::endl;
        Base *base = generate();
        std::cout << "Identifying class with pointer..." << std::endl;
        identify(base);
        std::cout << "Identifying class with reference..." << std::endl;
        identify(*base);
        delete base;
        std::cout << "---------------------------------------------------------------" << std::endl;
    }
    std::cout << "Test 11..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Generating base class..." << std::endl;
    Base *base = new Base;
    std::cout << "Identifying class with pointer..." << std::endl;
    identify(base);
    std::cout << "Identifying class with reference..." << std::endl;
    identify(*base);
    delete base;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
    return (0);
}