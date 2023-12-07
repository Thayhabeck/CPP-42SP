/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:25:26 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:32:09 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << GREEN;
    std::cout << "A new Animal was born!" << std::endl;
    std::cout << RESET;
}

AAnimal::AAnimal(std::string type)
{
    std::cout << GREEN;
    std::cout << "A new Animal of type " << type << " was born!" << std::endl;
    std::cout << RESET;
    this->_type = type;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    std::cout << GREEN;
    std::cout << "A new Animal was born by copy!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

AAnimal::~AAnimal()
{
    std::cout << RED;
    std::cout << "Animal was destroyed!" << std::endl;
    std::cout << RESET;
}

AAnimal &AAnimal::operator=(AAnimal const &animal)
{
    this->_type = animal._type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->_type);
}
