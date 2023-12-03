/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:18:33 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 17:56:32 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer( int const n ) : _n(n)
{
    std::cout << "Constructor called with value " << this->_n << std::endl;
    return ;
}

Integer::~Integer( void )
{
    std::cout << "Destructor called with value " << this->_n << std::endl;
    return ;
}

int     Integer::getValue( void ) const
{
    return this->_n;
}

// Sobrecarga de operadores
// A palavra operator é seguida pelo operador que queremos sobrecarregar
// e o tipo de retorno é o tipo do operando a esquerda do operador
// (no caso, Integer).
// O operando a direita do operador é passado como parâmetro para a função.
Integer &   Integer::operator=( Integer const & rhs )
{
    std::cout << "Assignment operator called from " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer     Integer::operator+( Integer const & rhs ) const
{
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de adição deve retornar uma cópia do operando
    return Integer(this->_n + rhs.getValue());
}

Integer     Integer::operator-( Integer const & rhs ) const
{
    std::cout << "Subtraction operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de subtração deve retornar uma cópia do operando
    return Integer(this->_n - rhs.getValue());
}

Integer     Integer::operator*( Integer const & rhs ) const
{
    std::cout << "Multiplication operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de multiplicação deve retornar uma cópia do operando
    return Integer(this->_n * rhs.getValue());
}

Integer     Integer::operator/( Integer const & rhs ) const
{
    std::cout << "Division operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de divisão deve retornar uma cópia do operando
    return Integer(this->_n / rhs.getValue());
}

Integer &   Integer::operator+=( Integer const & rhs )
{
    std::cout << "Addition assignment operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    this->_n += rhs.getValue();

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer &   Integer::operator-=( Integer const & rhs )
{
    std::cout << "Subtraction assignment operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    this->_n -= rhs.getValue();

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer &   Integer::operator*=( Integer const & rhs )
{
    std::cout << "Multiplication assignment operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    this->_n *= rhs.getValue();

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer &   Integer::operator/=( Integer const & rhs )
{
    std::cout << "Division assignment operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    this->_n /= rhs.getValue();

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer &   Integer::operator++( void )
{
    std::cout << "Pre-increment operator called with " << this->_n << std::endl;

    this->_n++;

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer     Integer::operator++( int )
{
    std::cout << "Post-increment operator called with " << this->_n << std::endl;

    Integer     tmp(*this);

    this->_n++;

    // O operador de atribuição deve retornar uma cópia do operando
    return tmp;
}

Integer &   Integer::operator--( void )
{
    std::cout << "Pre-decrement operator called with " << this->_n << std::endl;

    this->_n--;

    // O operador de atribuição deve retornar uma referência para o operando
    return *this;
}

Integer     Integer::operator--( int )
{
    std::cout << "Post-decrement operator called with " << this->_n << std::endl;

    Integer     tmp(*this);

    this->_n--;

    // O operador de atribuição deve retornar uma cópia do operando
    return tmp;
}

// Operadores de comparação
// A palavra operator é seguida pelo operador que queremos sobrecarregar
// e o tipo de retorno é um bool.
bool        Integer::operator==( Integer const & rhs ) const
{
    std::cout << "Equal to operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de comparação deve retornar um bool
    return (this->_n == rhs.getValue());
}

bool        Integer::operator!=( Integer const & rhs ) const
{
    std::cout << "Not equal to operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de comparação deve retornar um bool
    return (this->_n != rhs.getValue());
}

bool        Integer::operator>( Integer const & rhs ) const
{
    std::cout << "Greater than operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    //  O operador de comparação deve retornar um bool
    return (this->_n > rhs.getValue());
}

bool        Integer::operator<( Integer const & rhs ) const
{
    std::cout << "Less than operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de comparação deve retornar um bool
    return (this->_n < rhs.getValue());
}

bool        Integer::operator>=( Integer const & rhs ) const
{
    std::cout << "Greater than or equal to operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de comparação deve retornar um bool
    return (this->_n >= rhs.getValue());
}

bool        Integer::operator<=( Integer const & rhs ) const
{
    std::cout << "Less than or equal to operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    // O operador de comparação deve retornar um bool
    return (this->_n <= rhs.getValue());
}

// Operadores de inserção e extração
// A palavra operator é seguida pelo operador que queremos sobrecarregar
// e o tipo de retorno é um std::ostream.
// Esta função recebe como parâmetro uma referência para o tipo de stream que
// queremos sobrecarregar (no caso, std::ostream) e uma referência para o tipo
// que queremos inserir no stream (no caso, Integer).
std::ostream &  operator<<( std::ostream & o, Integer const & rhs )
{
    o << rhs.getValue();

    // O operador de inserção deve retornar uma referência para o stream
    return o;
}
