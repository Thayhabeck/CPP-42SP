/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:05:15 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:36:43 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << GREEN;
    std::cout << "🐶 A new Dog was born!" << std::endl;
    std::cout << RESET;
    this->_brain = new Brain();
}

Dog::Dog(Dog const &copy) : AAnimal(copy)
{
    std::cout << GREEN;
    std::cout << "🐶 A new Dog was born by copy!" << std::endl;
    std::cout << RESET;
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << RED;
    std::cout << "🐶 Dog was destroyed!" << std::endl;
    std::cout << RESET;
}

Dog &Dog::operator=(Dog const &dog)
{
    if (this == &dog)
		return (*this);
	this->_type = dog._type;
	this->_brain = new Brain(*dog._brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << BLUE;
    std::cout << "🐶 Woof woof woof..." << std::endl;
    std::cout << RESET;
}

std::string Dog::getIdea(int i) const
{
    return (this->_brain->getIdea(i));
}
