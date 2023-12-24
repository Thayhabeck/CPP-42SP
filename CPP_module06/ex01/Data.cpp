/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:53:30 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 01:18:19 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {}
Data::Data(std::string dataString, int dataNumber) : _dataString(dataString), _dataNumber(dataNumber) {}
Data::~Data(void) {}
Data::Data(Data const &copy) { *this = copy; }
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
std::string Data::getdataString(void) const { return (_dataString); }
int Data::getdataNumber(void) const { return (_dataNumber); }

// Setters
void Data::setdataString(std::string private_data) { _dataString = private_data; }
void Data::setdataNumber(int private_number) { _dataNumber = private_number; }

// Methods
void Data::printData(void)
{
    std::cout << "Private data: " << _dataString << std::endl;
    std::cout << "Private number: " << _dataNumber << std::endl;
}