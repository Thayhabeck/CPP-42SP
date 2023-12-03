/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:13:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:26:17 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.hpp"

// Construtor da classe Sample com parametros default usando a lista de inicializacao
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

    std::cout << "Constructor called" << std::endl;

    // Declarando os atributos da classe Sample com os parametros passados
    // this->a1 = p1;
    std::cout << "this->a1 = " << this->a1 << std::endl;

    // this->a2 = p2;
    std::cout << "this->a2 = " << this->a2 << std::endl;

    // this->a3 = p3;
    std::cout << "this->a3 = " << this->a3 << std::endl;

    return;
}

// Destrutor da classe Sample
Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}
