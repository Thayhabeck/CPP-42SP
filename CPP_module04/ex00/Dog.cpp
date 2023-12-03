/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:05:15 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 19:29:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN;
    std::cout << "🐶 A new Dog was born!" << std::endl;
    std::cout << RESET;
    this->_type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    std::cout << GREEN;
    std::cout << "🐶 A new Dog was born by copy!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << RED;
    std::cout << "🐶 Dog was destroyed!" << std::endl;
    std::cout << RESET;
}

Dog &Dog::operator=(Dog const &dog)
{
    std::cout << YELLOW;
    std::cout << "🐶 A new Dog was born by assignation!" << std::endl;
    std::cout << RESET;
    this->_type = dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << BLUE;
    std::cout << "🐶 Woof woof woof..." << std::endl;
    std::cout << RESET;
}
