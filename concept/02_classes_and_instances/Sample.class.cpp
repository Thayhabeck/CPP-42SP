/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:43:52 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/18 18:55:31 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) // constructor
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample::~Sample(void) // destructor
{
    std::cout << "Destructor called" << std::endl;
    return;
}
