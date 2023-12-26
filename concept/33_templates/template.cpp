/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:42:46 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 16:23:50 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Um template é um modelo de função ou classe que o compilador usa para gerar
// uma função ou classe específica para um tipo de dado.
// A variavel T é um tipo de dado genérico, que pode ser substituido por qualquer
// tipo de dado, como int, float, double, etc.
template <typename T>
T const &max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

int foo(int x) { printf("Long Computing time\n"); return (x); }


// A função max() pode ser usada para qualquer tipo de dado, desde que o operador
// > esteja definido para esse tipo de dado.
// O compilador cria uma função específica para cada tipo de dado que é usado
// com a função max().
// Isso é chamado de instanciamento de função.

int main(void)
{
    int a = 21;
    int b = 42;
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;               // Instanciamento explícito
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a, b) << std::endl;                    // Instanciamento implícito

    float c = 4.2f;
    float d = 42.0f;
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl;             // Instanciamento explícito
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c, d) << std::endl;                    // Instanciamento implícito

    char e = 'a';
    char f = 'z';
    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl;              // Instanciamento explícito
    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max(e, f) << std::endl;                    // Instanciamento implícito

    // A função max() também pode ser usada com ponteiros.
    // Nesse caso, o compilador cria uma função específica para ponteiros.
    int *g = &a;
    int *h = &b;
    std::cout << "Max of " << *g << " and " << *h << " is ";
    std::cout << *max<int *>(g, h) << std::endl;            // Instanciamento explícito
    std::cout << "Max of " << *g << " and " << *h << " is ";
    std::cout << *max(g, h) << std::endl;                   // Instanciamento implícito

    int ret = max<int>(foo(21), foo(42));                  // Instanciamento explícito
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << ret << std::endl;

    return (0);
}
