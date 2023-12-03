/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:26:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:28:02 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample.hpp"

int     main(void)
{
    // Instanciando um objeto da classe Sample
    Sample instance;

    // Atribuição de valor ao atributo foo
    instance.foo = 42;

    // Acessando o atributo foo
    std::cout << "instance.foo: " << instance.foo << std::endl;

    // Chamando o método bar
    instance.bar();

    return (0);
}

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample