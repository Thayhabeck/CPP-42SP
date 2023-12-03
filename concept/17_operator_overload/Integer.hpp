/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:19:19 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 13:36:00 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

#include <iostream>

class Integer
{
    public:

        Integer( int const n );
        ~Integer( void );

        int     getValue( void ) const;

        // Sobrecarga de operadores
        // A palavra operator é seguida pelo operador que queremos sobrecarregar
        // e o tipo de retorno é o tipo do operando a esquerda do operador
        // (no caso, Integer).
        // O operando a direita do operador é passado como parâmetro para a função.
        Integer &   operator=( Integer const & rhs );

        Integer     operator+( Integer const & rhs ) const;
        Integer     operator-( Integer const & rhs ) const;

        Integer     operator*( Integer const & rhs ) const;
        Integer     operator/( Integer const & rhs ) const;

        Integer &   operator+=( Integer const & rhs );
        Integer &   operator-=( Integer const & rhs );

        Integer &   operator*=( Integer const & rhs );
        Integer &   operator/=( Integer const & rhs );

        Integer &   operator++( void );
        Integer     operator++( int );

        Integer &   operator--( void );
        Integer     operator--( int );

        // Operadores de comparação
        // A palavra operator é seguida pelo operador que queremos sobrecarregar
        // e o tipo de retorno é um bool.
        bool        operator==( Integer const & rhs ) const;
        bool        operator!=( Integer const & rhs ) const;

        bool        operator>( Integer const & rhs ) const;
        bool        operator<( Integer const & rhs ) const;

        bool        operator>=( Integer const & rhs ) const;
        bool        operator<=( Integer const & rhs ) const;

    private:

        int _n;
};

// Operadores de inserção e extração
// A palavra operator é seguida pelo operador que queremos sobrecarregar
// e o tipo de retorno é uma referência para o tipo de stream que queremos
// sobrecarregar (no caso, std::ostream).
// Esta função recebe como parâmetro uma referência para o tipo de stream que
// queremos sobrecarregar (no caso, std::ostream) e uma referência para o tipo
// que queremos inserir ou extrair (no caso, Integer).
std::ostream &  operator<<( std::ostream & o, Integer const & rhs );

#endif