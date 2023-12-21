/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConstCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:56:51 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 17:03:40 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    int a = 42;

    std::cout << "a = " << a << std::endl;

    const int *b = &a; // Implicit conversion

    // Não é possível atribuir um ponteiro const int * para um ponteiro int * usando
    // uma conversão implícita
    // Um erro de compilação será gerado

//    int *c = b; // Implicit conversion

    // É possível atribuir um ponteiro const int * para um ponteiro int *
    // usando const_cast

    int *d = const_cast<int *>(b); // Explicit conversion

    // Agora é possível alterar o valor de a usando o ponteiro d

    *d = 21;

    std::cout << "a = " << a << std::endl;

    return (0);
}