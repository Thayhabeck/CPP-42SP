/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:26:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:40:04 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample.hpp"

int     main(void)
{
    Sample instance;

    instance.publicFoo = 42;
    //instance._privateFoo = 42; // error: ‘int Sample::_privateFoo’ is private within this context

    std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
    //std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl; // error: ‘int Sample::_privateFoo’ is private within this context

    instance.publicBar();
    //instance._privateBar(); // error: ‘void Sample::_privateBar() const’ is private within this context

    return (0);
}

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample