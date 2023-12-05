/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:11:25 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/05 01:02:57 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << WGREEN;
    std::cout << "🐱 A new WrongCat was born!" << std::endl;
    std::cout << WRESET;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    std::cout << WGREEN;
    std::cout << "🐱 A new WrongCat was born by copy!" << std::endl;
    std::cout << WRESET;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << WRED;
    std::cout << "🐱 WrongCat was destroyed!" << std::endl;
    std::cout << WRESET;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongcat)
{
    this->_type = wrongcat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << WBLUE;
    std::cout << "🐱 Meaw? Or not?..." << std::endl;
    std::cout << WRESET;
}
