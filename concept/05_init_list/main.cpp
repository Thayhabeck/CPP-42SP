/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:18:26 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:28:16 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.hpp"
#include "Sample2.hpp"

int main(void)
{
    Sample1 instance('a', 42, 4.2f);
    Sample2 instance2('z', 13, 3.14f);

    return (0);
}

// Para compilar o arquivo main.cpp com os arquivos Sample1.cpp e Sample2.cpp, execute o seguinte comando:
// c++ -Wall -Wextra -Werror -std=c++98 Sample1.cpp Sample2.cpp main.cpp -o sample