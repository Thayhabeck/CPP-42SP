/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:53:30 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 16:41:37 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) 
{
    std::cout << GREEN << "Data instance created!" << RESET << std::endl;
}
Data::Data(std::string dataString, int dataNumber) : _dataString(dataString), _dataNumber(dataNumber) 
{
    std::cout << GREEN << "Data instance created with string: " << dataString;
    std::cout << " and number: " << dataNumber << RESET << std::endl;
}
Data::~Data(void) 
{
    std::cout << RED << "Data instance destroyed!" << RESET << std::endl;
}

Data::Data(Data const &copy) 
{ 
    std::cout << GREEN << "Data instance created by copy!" << RESET << std::endl;
    *this = copy; 
}

Data &Data::operator=(Data const &rhs)
{
    if (this != &rhs)
    {
        _dataString = rhs._dataString;
        _dataNumber = rhs._dataNumber;
    }
    return (*this);
}

// Getters
std::string Data::getDataString(void) const { return (_dataString); }
int Data::getDataNumber(void) const { return (_dataNumber); }

// Setters
void Data::setDataString(std::string private_data) { _dataString = private_data; }
void Data::setDataNumber(int private_number) { _dataNumber = private_number; }