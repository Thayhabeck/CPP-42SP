/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdioFunctions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:12:55 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 00:53:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream> // biblioteca de entrada e saída padrão
// Objeto cin é um objeto global que pertence a classe istream (>> operador de extração)
// Objeto cout é um objeto global que pertence a classe ostream (<< operador de inserção)
// Objeto cerr é um objeto global que pertence a classe ostream (<< operador de inserção)
// Objeto clog é um objeto global que pertence a classe ostream (<< operador de inserção)

int main(void)
{
    int     i;
    char    buff[512];

    std::cout << "Hello World!" << std::endl;       // endl é um manipulador de fluxo que causa uma nova linha
    std::cout << "Please enter your name: ";        // << operador de inserção
    std::cin >> buff;                               // >> operador de extração
    std::cout << "Please enter an integer value: "; // << operador de inserção
    std::cin >> i;                                  // >> operador de extração
    std::cout << buff << ", The value you entered is " << i; // << operador de inserção
    std::cout << " and its double is " << i * 2 << "." << std::endl; // << operador de inserção
    return 0;
}

// Para compilar o arquivo stdioFunctions.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror -std=c++98 stdioFunctions.cpp -o stdioFunctions