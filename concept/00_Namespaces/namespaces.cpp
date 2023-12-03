/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:19:59 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 00:53:13 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Aqui temos uma variável global e uma função declaradas que encontam-se em um escopo global
int gl_var = 1;
int f( void ) {return 2; }

// Usando um namespace podemos definir um novo escopo, empacotando a variável e a função, 
// possibilitando uma semântica mais fácil
namespace Foo
{
    int gl_var = 3;
    int f( void ) {return 4; }
} // namespace Foo

// Apesar de a variável (gl_var) e a função (f) terem o mesmo nome, não há conflito entre elas
// pois estão em escopos diferentes.
namespace Bar
{
    int gl_var = 5;
    int f( void ) {return 6; }
} // namespace Bar

// Criando um alias para o namespace 'Bar'
namespace Muf = Bar;

int main( void )
{
    printf("gl_var: %d\n", gl_var); // Imprime a variável global
    printf("f(): %d\n", f()); // Imprime a função global
    printf("Foo::gl_var: %d\n", Foo::gl_var); // Imprime a variável do namespace Foo
    printf("Foo::f(): %d\n", Foo::f()); // Imprime a função do namespace Foo
    printf("Bar::gl_var: %d\n", Bar::gl_var); // Imprime a variável do namespace Bar
    printf("Bar::f(): %d\n", Bar::f()); // Imprime a função do namespace Bar
    printf("Muf::gl_var: %d\n", Muf::gl_var); // Imprime a variável do namespace Muf
    printf("Muf::f(): %d\n", Muf::f()); // Imprime a função do namespace Muf
    printf("::gl_var: %d\n", ::gl_var); // Imprime a variável do escopo global
    printf("::f(): %d\n", ::f()); // Imprime a função do escopo global
    return 0;
}

// Para compilar o arquivo namespaces.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror -std=c++98 namespaces.cpp -o namespaces