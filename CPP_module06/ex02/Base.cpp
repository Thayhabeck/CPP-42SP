/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:52:33 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 10:38:27 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {}

Base *generate(void)
{
    int i = std::rand() % 3;
    switch (i)
    {
    case 0:
        return (new A);
    case 1:
        return (new B);
    case 2:
        return (new C);
    default:
        return (NULL);
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << GREEN "It's an A class" RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << GREEN "It's a B class" RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << GREEN "It's a C class" RESET << std::endl;
    else
        std::cout << RED "Unknown class" RESET << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << BLUE "It's an A class" RESET << std::endl;
        (void)a;
        return ;
    }
    catch (std::exception &e) {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << BLUE "It's a B class" RESET << std::endl;
        (void)b;
        return ;
    }
    catch (std::exception &e) {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << BLUE "It's a C class" RESET << std::endl;
        (void)c;
    }
    catch (std::exception &e) 
    {
        std::cout << RED "Unknown class" RESET << std::endl;
    }
}
