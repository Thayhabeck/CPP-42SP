/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:26:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:58:28 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Sample1.hpp"
#include "Sample2.hpp"

int     main(void)
{
    Sample1 instance1;
    //Sample2 instance2; // error: calling a private constructor of class 'Sample2'

    return (0);
}

// Para compilar o arquivo main.cpp com o arquivo Sample1.cpp e Sample2.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample1.cpp Sample2.cpp -o sample