/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:13:20 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 21:22:59 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample.hpp"

// Construtor
Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

// Destrutor
Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// Métodos (member function)
void	Sample::bar( char const c ) const
{
	std::cout << "Member function bar called with char overload: " << c << std::endl;
	return ;
}

// Sobrecarga de métodos (overload) - Mesmo nome, mas parâmetros diferentes
void	Sample::bar( int const n ) const
{
	std::cout << "Member function bar called with int overload: " << n << std::endl;
	return ;
}

// Sobrecarga de métodos
void	Sample::bar( float const z ) const
{
	std::cout << "Member function bar called with float overload: " << z << std::endl;
	return ;
}
 // Sobrecarga de métodos
void	Sample::bar( Sample const & i ) const
{
	(void)i;
	std::cout << "Member function bar called with Sample overload" << std::endl;
	return ;
}
