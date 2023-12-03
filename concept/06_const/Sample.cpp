/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:33:04 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:49:15 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

// Inicialização de atributos const devem ser feitas no construtor da classe e não no corpo da classe
Sample::Sample(float const f) : pi(f), qd(42)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

// Const no final da função significa que a função não vai alterar nenhum atributo da classe
// e nem chamar nenhuma função que altere algum atributo da classe
void Sample::bar(void) const
{
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;

    // this->qd = 0; // error: assignment of member ‘Sample::qd’ in read-only object
    return;
}
