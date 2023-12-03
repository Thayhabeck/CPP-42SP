/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:56:43 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 18:41:31 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int     main( void )
{
    Integer a( 42 );
    Integer b( 21 );
    Integer test( 0 );

    std::cout << "a is " << a.getValue() << std::endl;
    std::cout << "b is " << b.getValue() << std::endl;

    // Operadores de atribuição
    std::cout << "============== Operatoradores de atribuição ===============" << std::endl;
    std::cout << "================ Atribuição simples        ================" << std::endl;
    a = b;
    std::cout << "a is " << a.getValue() << std::endl;
    std::cout << "b is " << b.getValue() << std::endl;

    std::cout << "================ Atribuição encadeada     ================" << std::endl;
    test = a = b;
    std::cout << "test is " << test.getValue() << std::endl;
    std::cout << "a is " << a.getValue() << std::endl;
    std::cout << "b is " << b.getValue() << std::endl;

    std::cout << "================ Atribuição com soma      ================" << std::endl;
    test += b;
    std::cout << "test is " << test.getValue() << std::endl;

    std::cout << "================ Atribuição com subtração ================" << std::endl;
    test -= b;
    std::cout << "test is " << test.getValue() << std::endl;

    std::cout << "============== Atribuição com multiplicação ==============" << std::endl;
    test *= b;
    std::cout << "test is " << test.getValue() << std::endl;

    std::cout << "================ Atribuição com divisão   ================" << std::endl;
    test /= b;
    std::cout << "test is " << test.getValue() << std::endl;

    // Operadores aritméticos
    std::cout << "================ Operadores aritméticos   ================" << std::endl;
    std::cout << "================ Soma                     ================" << std::endl;
    test = a + b;
    std::cout << "a + b is " << test.getValue() << std::endl;
    Integer c( a + b );
    std::cout << "c is " << c.getValue() << std::endl;

    std::cout << "================ Subtração                ================" << std::endl;
    test = a - b;
    std::cout << "a - b is " << test.getValue() << std::endl;
    Integer d( c - b );
    std::cout << "d is " << d.getValue() << std::endl;

    std::cout << "================ Multiplicação            ================" << std::endl;
    test = a * b;
    std::cout << "a * b is " << test.getValue() << std::endl;
    Integer e( d * c );
    std::cout << "e is " << e.getValue() << std::endl;

    std::cout << "================ Divisão                  ================" << std::endl;
    test = a / b;
    std::cout << "a / b is " << test.getValue() << std::endl;
    Integer f( e / d );
    std::cout << "f is " << f.getValue() << std::endl;

    Integer g( 42 );
    Integer h( 42 );

    // Operadores de incremento e decremento
    std::cout << "========= Operadores de incremento e decremento ==========" << std::endl;
    std::cout << "================ Pré-incremento           ================" << std::endl;
    std::cout << "g is " << g.getValue() << std::endl;
    std::cout << "++g is " << (++g).getValue() << std::endl;
    std::cout << "g is " << g.getValue() << std::endl;

    std::cout << "================ Pós-incremento           ================" << std::endl;
    std::cout << "h is " << h.getValue() << std::endl;
    std::cout << "h++ is " << (h++).getValue() << std::endl;
    std::cout << "h is " << h.getValue() << std::endl;


    std::cout << "================ Pré-decremento           ================" << std::endl;
    std::cout << "g is " << g.getValue() << std::endl;
    std::cout << "--g is " << (--g).getValue() << std::endl;
    std::cout << "g is " << g.getValue() << std::endl;

    std::cout << "================ Pós-decremento           ================" << std::endl;
    std::cout << "h is " << h.getValue() << std::endl;
    std::cout << "h-- is " << (h--).getValue() << std::endl;
    std::cout << "h is " << h.getValue() << std::endl;

    // Operadores de comparação
    std::cout << "================ Operadores de comparação ================" << std::endl;
    std::cout << "================ Igual a                  ================" << std::endl;
    if ( g == h )
        std::cout << "g and h are equal" << std::endl;
    else
        std::cout << "g and h are not equal" << std::endl;

    std::cout << "================ Diferente de             ================" << std::endl;
    if ( g != h )
        std::cout << "g and h are not equal" << std::endl;
    else
        std::cout << "g and h are equal" << std::endl;

    std::cout << "================ Maior que                ================" << std::endl;
    if ( g > h )
        std::cout << "g is greater than h" << std::endl;
    else
        std::cout << "g is not greater than h" << std::endl;

    std::cout << "================ Menor que                ================" << std::endl;
    if ( g < h )
        std::cout << "g is less than h" << std::endl;
    else
        std::cout << "g is not less than h" << std::endl;

    return 0;
}

// Para compilar: c++ -Wall -Wextra -Werror -std=c++98 main.cpp Integer.cpp -o operator_overload