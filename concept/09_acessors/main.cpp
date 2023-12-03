/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:11:26 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 21:12:02 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int     main(void)
{
    Sample  instance;

    instance.setFoo(42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
    instance.setFoo(-42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
    return (0);
}

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample