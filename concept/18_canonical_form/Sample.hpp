/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 19:42:24 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

// A forma canônica de uma classe é a forma mais simples de uma classe que pode ser escrita.
// A forma canônica de uma classe é composta por:
// 1. Um construtor padrão
// 2. Um construtor de cópia
// 3. Um destruidor
// 4. Um operador de atribuição
class Sample
{
    public:

        Sample( void ); // Construtor padrão (canônico)
        Sample( int const n );  // Sobrecarga do construtor 
        Sample( Sample const & src );   // Construtor de cópia (canônico)
        ~Sample( void );    // Destruidor (canônico)

        Sample &    operator=( Sample const & rhs );    // Operador de atribuição (canônico)

        int     getFoo( void ) const;   // getter

    private:    

        int     _foo;   // atributo

};

// Sobrecarga do operador de inserção (<<) para imprimir o valor do atributo _foo
std::ostream &  operator<<( std::ostream & o, Sample const & i );

#endif