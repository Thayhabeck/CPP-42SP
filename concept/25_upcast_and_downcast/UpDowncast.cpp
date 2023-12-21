/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpDowncast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:53:54 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 12:03:56 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent
{
    public:
        virtual ~Parent() {}
};

class Child1 : public Parent
{
};

class Child2 : public Parent
{
};

int main()
{
    // Upcast é quando um ponteiro de uma classe derivada é atribuído a um ponteiro de uma classe base
    // Downcast é quando um ponteiro de uma classe base é atribuído a um ponteiro de uma classe derivada

    Child1 a;

    Parent *b = &a; // Implicit reinterpretation cast
    Parent *c = (Parent *) &a; // Explicit reinterpretation cast

    Parent *d = &a; // Implicit upcast => OK

    // A atribuição abaixo não é permitida, pois o compilador não sabe se o ponteiro
    // Parent* está apontando para um objeto do tipo Child1 ou Child2

//    Child1 *e = d; // Implicit downcast => Hell no!

    // A atribuição abaixo é permitida, pois o programador está dizendo explicitamente
    // que o ponteiro Parent* está apontando para um objeto do tipo Child2
    // mas originalmente o ponteiro Parent* está apontando para um objeto do tipo Child1

    Child2 *f = (Child2 *) d; // Explicit downcast => OK, but really?


    // Não é recomendado fazer downcast e upcast usando cast de C
    // O compilador não vai avisar se o cast está sendo feito de forma errada
    // O ideal é usar o cast de C++
    // static_cast
    // dynamic_cast
    // reinterpret_cast
    // const_cast
    
    return 0;

}