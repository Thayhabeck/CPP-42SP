/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:54:30 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 16:41:58 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::~Serializer(void) {}

Serializer::Serializer(Serializer const &copy) { *this = copy; }

Serializer &Serializer::operator=(Serializer const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    std::cout << YELLOW << "Serializing data..." << RESET << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    std::cout << YELLOW << "Deserializing data..." << RESET << std::endl;
    return (reinterpret_cast<Data *>(raw));
}
