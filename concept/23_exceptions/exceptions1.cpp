/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:22:40 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 19:25:43 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

void test1()
{
    try {
        //Se tudo der certo, execute
        //Se der errado, jogue uma exceção
        //A exceção será capturada pelo catch
        //O throw é o que faz a exceção ser lançada
        throw std::runtime_error("test1");
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test2()
{
    class PEBKACException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("Problem exists between keyboard and chair");
        }
    };

    try {
        throw PEBKACException();
    }
    catch (PEBKACException &e) {
        // Handle the fact that the user is an idiot
    }
    catch (std::exception &e) {
        //Handle other exceptions
        std::cout << e.what() << std::endl;
    }
    
}