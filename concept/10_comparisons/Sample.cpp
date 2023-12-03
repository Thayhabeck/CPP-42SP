/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:03:41 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(int n) : _foo(n)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int     Sample::getFoo(void) const
{
    return this->_foo;
}

// A função compare retorna um inteiro que indica se o objeto atual é menor, 
// igual ou maior que o objeto passado como argumento.
int     Sample::compare(Sample * other) const
{
    if (this->_foo < other->getFoo())
        return -1;
    else if (this->_foo > other->getFoo())
        return 1;
    return 0;
}
