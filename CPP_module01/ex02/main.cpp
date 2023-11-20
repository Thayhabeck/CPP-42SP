/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:13:03 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 14:56:45 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << std::endl;
    std::cout << "-------------------- HI THIS IS BRAIN TEST --------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << std::endl;
    std::cout << "Memory address of the string variable:\t" << &str << std::endl;
    std::cout << "Memory address held by stringPTR:\t" << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:\t" << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << std::endl;
    std::cout << "Value of the string variable:\t" << str << std::endl;
    std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

    return 0;
}