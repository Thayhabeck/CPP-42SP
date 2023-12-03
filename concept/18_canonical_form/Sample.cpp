/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:13:20 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 19:42:34 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample.hpp"

// Construtor padrão
Sample::Sample( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

// Construtor parametrizado
Sample::Sample( int const n ) : _foo(n)
{
	std::cout << "Constructor called with parametter " << n << std::endl;
	return ;
}

// Construtor de cópia
Sample::Sample( Sample const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// Destruidor
Sample::~Sample( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// Operador de atribuição
Sample &	Sample::operator=( Sample const & rhs )
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

// getter
int		Sample::getFoo( void ) const
{
	return this->_foo;
}

// Sobrecarga de operador de inserção (<<) para imprimir o valor do atributo _foo
std::ostream &	operator<<( std::ostream & o, Sample const & i )
{
	o << "The value of _foo is: " << i.getFoo();
	return o;
}

