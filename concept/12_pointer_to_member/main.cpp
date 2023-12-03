/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:36 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:01:52 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int     main(void)
{
    Sample instance;
    Sample *instancep = &instance;

    //p é um ponteiro para um membro de classe Sample que é um int
    int     Sample::*p = NULL;
    //f é um ponteiro para uma função membro de classe Sample que retorna void e não recebe argumentos
    void    (Sample::*f)(void) const;

    //Atribuindo o endereço de foo para p
    p = &Sample::foo;
    std::cout << "Value of member foo : " << instance.foo << std::endl;

    //Atribuindo o valor 21 para o membro foo de instance
    instance.*p = 21;
    std::cout << "Value of member foo : " << instance.foo << std::endl;

    //Atribuindo o valor 42 para o membro foo de instancep
    instancep->*p = 42;
    std::cout << "Value of member foo : " << instance.foo << std::endl;

    //Atribuindo o endereço de bar para f
    f = &Sample::bar;
    
    //Chamando a função bar de instance
    (instance.*f)();
    
    //Chamando a função bar de instancep
    (instancep->*f)();
    
    return 0;
}
// Para compilar o arquivo main.cpp com o arquivo Sample.cpp, execute o seguinte comando:
// $ c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o sample