/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:02:38 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

// Membros estáticos são compartilhados por todas as instâncias de uma classe.
// Sempre que uma instância é criada, o construtor é chamado e o atributo _nbInst é incrementado.
Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;
    Sample::_nbInst += 1;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getNbInst(void)
{
    return Sample::_nbInst;
}

// Membros estáticos devem ser inicializados fora da classe.
int     Sample::_nbInst = 0;