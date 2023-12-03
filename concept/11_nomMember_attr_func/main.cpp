/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:36 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 21:57:02 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

void    f0(void)
{
    Sample instance;

    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    return;
}

void    f1(void)
{
    Sample instance;

    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    f0();
    return;
}

int     main(void)
{
    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
    return 0;
}

// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample