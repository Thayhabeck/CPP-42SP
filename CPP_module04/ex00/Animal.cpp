/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:20:19 by thabeck-          #+#    #+#             */
/*   Updated: 2024/02/01 19:15:23 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << GREEN;
    std::cout << "A new Animal was born!" << std::endl;
    std::cout << RESET;
}

Animal::Animal(std::string type)
{
    std::cout << GREEN;
    std::cout << "A new Animal of type " << type << " was born!" << std::endl;
    std::cout << RESET;
    this->_type = type;
}

Animal::Animal(Animal const &copy)
{
    std::cout << GREEN;
    std::cout << "A new Animal was born by copy!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << RED;
    std::cout << "Animal was destroyed!" << std::endl;
    std::cout << RESET;
}

Animal &Animal::operator=(Animal const &animal)
{
    std::cout << GREEN;
    std::cout << "A new Animal was born by assignation!" << std::endl;
    std::cout << RESET;
    this->_type = animal._type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << BLUE;
    std::cout << "Animal sound..." << std::endl;
    std::cout << RESET;
}
