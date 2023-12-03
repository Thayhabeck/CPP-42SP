/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:44:54 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:45:31 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

int main(void)
{
    Sample instance(3.14f);

    instance.bar();
    return (0);
}

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// c++ -Wall -Wextra -Werror -std=c++98 Sample.cpp main.cpp -o sample