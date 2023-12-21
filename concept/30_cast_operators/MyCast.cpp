/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCast.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:11:58 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 17:35:55 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Foo {
    public:
        Foo(float const v) : _v(v) {}

        float getV(void) const  { return this->_v; }

        // cast operators
        // Os operadores de conversão são funções de membro que convertem um tipo de classe para um tipo de dados especificado.
        // Eles são chamados sempre que os objetos do tipo de classe são usados ​​como se fossem do tipo de dados especificado,
        // como quando um objeto do tipo de classe é passado como um argumento para uma função que espera um argumento do tipo de dados especificado.
        operator float(void)    { return this->_v; }
        operator int(void)      { return static_cast<int>(this->_v); }

    private:
        float _v;

};

int main(void)
{
    Foo a(420.042f);

    // A classe Foo possui dois operadores de conversão, um para float e outro para int.
    float b = a;
    int c = a;

    std::cout << "a = " << a.getV() << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}