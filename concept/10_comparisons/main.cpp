/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:36 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 21:30:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int     main(void)
{
    Sample  instance1(42);
    Sample  instance2(42);

    // self-comparison always returns true
    // if (&instance1 == &instance1)
    //     std::cout << "instance1 and instance1 are physically equal" << std::endl;
    // else
    //     std::cout << "instance1 and instance1 are not physically equal" << std::endl;

    if (&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;
    if (instance1.compare(&instance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;
    if (instance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not structurally equal" << std::endl;
    return (0);
}

// Physical equality is when two pointers point to the same address.
// Structural equality is when two instances have the same values for their attributes.
// The == operator is used to compare two instances of a class.

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample