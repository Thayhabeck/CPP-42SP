/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:58:59 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 16:44:16 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void) {

    std::cout << BLUE << std::endl;
	std::cout << "------------------- REINTERPRET CAST TEST ---------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating data instance..." << std::endl;
    std::cout << "Printing pointer address of data instance..." << std::endl;
    std::cout << "Printing data string..." << std::endl;
    std::cout << "Printing data number..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Data *data = new Data("I'm a data", 42);
    std::cout << "Data is in pointer: \t\t" << data << std::endl;
    std::cout << "Private data is: \t\t" << data->getDataString() << std::endl;
    std::cout << "Private number is: \t\t" << data->getDataNumber() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating raw pointer using reinterpret_cast (serializing)..." << std::endl;
    std::cout << "Printing raw pointer address..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    uintptr_t raw = Serializer::serialize(data);
    std::cout << "Raw pointer is: \t\t" << raw << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Deserializing raw pointer using reinterpret_cast..." << std::endl;
    std::cout << "Confirming that data pointer is still pointing at the same address..." << std::endl;
    std::cout << "Printing private data and number..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    Data *ptr = Serializer::deserialize(raw);
    std::cout << "Data is still pointing at: \t" << ptr << std::endl;
    std::cout << "Private data is: \t\t" << ptr->getDataString() << std::endl;
    std::cout << "Private number is: \t\t" << ptr->getDataNumber() << std::endl;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Deleting data instance..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;

    delete data;

    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
    std::cout << RESET;

    return (0);
}
