/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:49:22 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:49:34 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.hpp"

Sample2::Sample2(void)
{
    std::cout << "Constructor called" << std::endl;
    this->foo = 0;
    std::cout << "this->foo: " << this->foo << std::endl;
    this->bar();
    return;
}

Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample2::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return;
}
