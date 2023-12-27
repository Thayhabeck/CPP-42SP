/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:55:33 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 14:45:57 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> intArray(5);
    Array<std::string> stringArray(5);
    Array<float> floatArray(5);
    Array<double> doubleArray(5);
    Array<char> charArray(5);

    std::cout << std::endl;
    std::cout << "---------------------- ARRAY TEST -----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- INT TEST ------------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = static_cast<int>(i);
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- STRING TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::stringstream gstream;
    for (unsigned int i = 0; i < stringArray.size(); i++)
    {
        gstream << "string" << i;
        gstream >> stringArray[i];
        gstream.clear();
    }
    for (unsigned int i = 0; i < stringArray.size(); i++)
        std::cout << stringArray[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- FLOAT TEST ----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    for (unsigned int i = 0; i < floatArray.size(); i++)
        floatArray[i] = static_cast<float>(i + 0.5f);
    for (unsigned int i = 0; i < floatArray.size(); i++)
        std::cout << floatArray[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- DOUBLE TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    for (unsigned int i = 0; i < doubleArray.size(); i++)
        doubleArray[i] = static_cast<double>(i + 0.42);
    for (unsigned int i = 0; i < doubleArray.size(); i++)
        std::cout << doubleArray[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- CHAR TEST -----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    for (unsigned int i = 0; i < charArray.size(); i++)
        charArray[i] = static_cast<char>(i + 65);
    for (unsigned int i = 0; i < charArray.size(); i++)
        std::cout << charArray[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- COPY TEST -----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    Array<int> intArrayCopy(intArray);
    intArrayCopy[0] = 42;
    for (unsigned int i = 0; i < intArrayCopy.size(); i++)
        std::cout << intArray[i] << " - " << intArrayCopy[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- ASSIGN TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    Array<char> charArrayAssign = charArray;
    charArrayAssign[0] = 'Z';
    for (unsigned int i = 0; i < charArrayAssign.size(); i++)
        std::cout << charArray[i] << " - " << charArrayAssign[i] << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- OUT OF BOUNDS TEST --------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    try
    {
        floatArray[10] = 42.42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- EMPTY ARRAY TEST ----------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Array<int> emptyArray;
    try
    {
        emptyArray[0] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
    
    return (0);
}