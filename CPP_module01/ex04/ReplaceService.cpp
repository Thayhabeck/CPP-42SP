/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceService.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:22:28 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/22 16:38:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceService.hpp"

ReplaceService::ReplaceService() { }

ReplaceService::~ReplaceService() { }

int ReplaceService::validateParams(int argc, char *argv[])
{
    std::ifstream file;

    if (argc != 4)
    {
        std::cout << RED << "Error: Invalid number of arguments" << std::endl;
        std::cout << "Usage: ./sedIsForLosers <filename> <string_to_find> <string_to_replace>";
        std::cout << RESET << std::endl;
        return (1);
    }
    _filename = argv[1];
    _strToFind = argv[2];
    _strToReplace = argv[3];
    file.open(_filename.c_str());
    if (!file.is_open())
    {
        std::cout << RED << "Error: Input file not found" << RESET << std::endl;
        file.close();
        return (1);
    }
    file.peek();
    if (file.eof())
    {
        std::cout << RED << "Error: Input file is empty" << RESET << std::endl;
        file.close();
        return (1);
    }
    if (_strToFind.empty())
    {
        std::cout << RED << "Error: Empty string <string_to_find>." << RESET << std::endl;
        return (1);
    }
    file.close();
    return (0);
}

int ReplaceService::replaceFunction()
{
    std::ifstream file;
    std::string line;
    std::ofstream outputFile;

    file.open(_filename.c_str());
    outputFile.open((_filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cout << RED << "Error: Unable to create output file" << RESET << std::endl;
        file.close();
        return (1);
    }
    while (getline(file, line))
    {
        replaceLine(line);
        outputFile << line;
        if (!file.eof())
            outputFile << std::endl;
    }
    file.close();
    outputFile.close();
    std::cout << GREEN << "Replace file successfully created!" << RESET << std::endl;
    return (0);
}

void ReplaceService::replaceLine(std::string& line)
{
    for (size_t i = 0; ;i += _strToReplace.length())
    {
        i = line.find(_strToFind, i);
        if (i == std::string::npos)
            break;
        line.erase(i, _strToFind.length());
        line.insert(i, _strToReplace);
    }
}
