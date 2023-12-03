/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:48:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:49:09 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"

Sample1::Sample1(void)
{
    std::cout << "Constructor called" << std::endl;
    this->foo = 0;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample1::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
