/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DynamicCast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:09:30 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 16:56:33 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent { public: virtual ~Parent() {} };

class Child1 : public Parent {};
class Child2 : public Parent {};

int main()
{
    Child1 a;
    Parent *b = &a;

    // Implicit downcasting
    // Usando dynamic_cast, o compilador verifica se o tipo de objeto apontado por b é Child1 ou não.
    // Se for, então o ponteiro é convertido para Child1 * e atribuído a c.
    Child1 *c = dynamic_cast<Child1 *>(b);
    if (c == NULL)
        std::cout << "Unsuccessful dynamic cast - c" << std::endl;
    else
        std::cout << "Successful dynamic cast - c" << std::endl;

    // Explicit downcasting
    // Usando dynamic_cast, o compilador verifica se o tipo de objeto apontado por b é Child2 ou não.
    // Se não for, ocorre uma exceção std::bad_cast.
    try {
        Child2 &d = dynamic_cast<Child2 &>(*b);
        std::cout << "Successful dynamic cast - d" << std::endl;
        (void)d;
    }
    catch (std::bad_cast &bc) {
        std::cout << "Unsuccessful dynamic cast - d" << std::endl;
        std::cout << bc.what() << std::endl;
        return (0);
    }

    return (0);
}