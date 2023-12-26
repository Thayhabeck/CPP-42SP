/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:20:29 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 19:46:20 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void    subject_test(void)
{
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
}

int main(void)
{
    std::cout << BLUE << std::endl;
    std::cout << "----------------------- SUBJECT TEST --------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    subject_test();
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- INT TEST ------------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;    
    int a = 21;
    int b = 42;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- FLOAT TEST ----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;    
    float c = 21.42;
    float d = 42.21;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- CHAR TEST -----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    char e = 'a';
    char f = 'b';
    std::cout << "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- DOUBLE TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    double g = 21.42;
    double h = 42.21;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- STRING TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << RESET;
    std::string i = "avaliador";
    std::string j = "thayna";
    std::cout << "i = " << i << ", j = " << j << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
    std::cout << "max(i, j) = " << ::max(i, j) << std::endl;
    std::cout << BLUE;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
    std::cout << RESET;

    return (0);
}