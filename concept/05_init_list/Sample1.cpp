/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:13:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:25:59 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"

// Construtor da classe Sample com parametros default
Sample1::Sample1(char p1, int p2, float p3) {

    std::cout << "Constructor called" << std::endl;

    // Declarando os atributos da classe Sample com os parametros passados
    this->a1 = p1;
    std::cout << "this->a1 = " << this->a1 << std::endl;

    this->a2 = p2;
    std::cout << "this->a2 = " << this->a2 << std::endl;

    this->a3 = p3;
    std::cout << "this->a3 = " << this->a3 << std::endl;

    return;
}

// Destrutor da classe Sample
Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}
