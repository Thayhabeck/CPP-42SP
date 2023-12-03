/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:13:20 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 00:53:31 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample.hpp"

// Construtor
Sample::Sample( void )
{
    std::cout << "Constructor called" << std::endl;

    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();
    
    return ;
}

// Destrutor
Sample::~Sample( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

// Métodos (member function)
void    Sample::bar( void ) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
