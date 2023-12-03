/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:43:54 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 18:54:23 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    int numberOfBalls = 42;
    // Um ponteiro é uma variável que armazena um endereço de memória
    int *pBalls = &numberOfBalls; // pointer to numberOfBalls
    // Uma referência é uma variável que é um alias para outra variável
    int &rBalls = numberOfBalls; // reference to numberOfBalls
    
    //int &rBalls2; // NÃO COMPILA! Uma referência deve ser inicializada

    // O valor de um ponteiro é o endereço de memória que ele armazena
    // O valor de uma referência é o valor da variável que ela referencia
    std::cout << "numberOfBalls: " << numberOfBalls << std::endl;
    // O operador de desreferência (*) retorna o valor da variável que o ponteiro aponta
    std::cout << "*pBalls: " << *pBalls << std::endl;
    // Uma referência não precisa do operador de desreferência, pois ela é um alias para a variável
    std::cout << "rBalls: " << rBalls << std::endl;

    rBalls = 21; // alterando o valor de rBalls irá alterar o valor de numberOfBalls
    std::cout << "\nnumberOfBalls: " << numberOfBalls << std::endl;
    std::cout << "*pBalls: " << *pBalls << std::endl;
    std::cout << "rBalls: " << rBalls << std::endl;

    *pBalls = 84; // alterando o valor de *pBalls irá alterar o valor de numberOfBalls
    std::cout << "\nnumberOfBalls: " << numberOfBalls << std::endl;
    std::cout << "*pBalls: " << *pBalls << std::endl;
    std::cout << "rBalls: " << rBalls << std::endl;

    return (0);
}

// https://www.learncpp.com/cpp-tutorial/73-passing-arguments-by-reference/
// https://www.learncpp.com/cpp-tutorial/6-8a-pointers-and-const/

// Para compilar: c++ -Wall -Wextra -Werror references.cpp -o references