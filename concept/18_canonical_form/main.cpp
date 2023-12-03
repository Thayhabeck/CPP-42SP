/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:14:20 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/25 19:42:08 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int		main( void )
{
    // Instanciando objeto com construtor padrão
    Sample	instance1;
    // Instanciando objeto com construtor parametrizado
    Sample	instance2(42);
    // Instanciando objeto com construtor de cópia
    Sample	instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;

    // Atribuindo valor de instance2 para instance3 com operador de atribuição (=) sobrecarregado
    instance3 = instance2;

    // Imprimindo valores com operador de inserção (<<) sobrecarregado
    std::cout << instance3 << std::endl;

    return 0;
}

// Compile: c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample