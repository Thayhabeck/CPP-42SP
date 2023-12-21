/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:33:58 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 16:04:55 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent
{
    public:
        virtual ~Parent() {}
};

class Child1 : public Parent {};
class Child2 : public Parent {};

class Unrelated {};

int main()
{
    Child1 a;

    Parent *b = &a;

    // A atribuição abaixo não é permitida, pois o compilador não sabe se o ponteiro
    // Parent* b está apontando para um objeto do tipo Child1 ou Child2

//    Child1 *c = b;

    // A conversão abaixo é permitida, pois o programador está dizendo explicitamente
    // que o ponteiro Parent* b está apontando para um objeto do tipo Child2
    // Porem, o compilador não vai avisar se a conversão está sendo feita de forma errada
    // (por exemplo, se o ponteiro Parent* b estiver apontando para um objeto do tipo Child1)
    Child2 *d = static_cast<Child2 *>(b);

    // O compilador não permite a conversão abaixo, pois o ponteiro Parent* b não está
    // apontando para um objeto do tipo Unrelated
    
 //   Unrelated *e = static_cast<Unrelated *>(b);
    
    // Para fazer downcasting de forma segura, é necessário usar dynamic_cast!

    return (0);
}