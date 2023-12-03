/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:10:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 21:11:13 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void)
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

void    Sample::setFoo(int v)
{
    if (v >= 0)
        this->_foo = v;
    return;
}
