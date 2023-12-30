/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:14:43 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 21:18:04 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void subjectTest() 
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    std::cout << std::endl;
    std::cout << "------------------------ SPAN TEST ----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- SUBJECT TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << BLUE;
    subjectTest();
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- DEFAULT TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 5 spaces" << std::endl;
    std::cout << "Add 10, 23, 3, 18 and 20 to Span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp = Span(5);
    sp.addNumber(10);
    sp.addNumber(23);
    sp.addNumber(3);
    sp.addNumber(18);
    sp.addNumber(20);

    std::cout << BLUE;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "-------------------- NEGATIVE NUMBERS TEST --------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 5 spaces" << std::endl;
    std::cout << "Add 10, 23, -3, 18 and -20 to Span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp1 = Span(5);
    sp1.addNumber(10);
    sp1.addNumber(23);
    sp1.addNumber(-3);
    sp1.addNumber(18);
    sp1.addNumber(-20);

    std::cout << BLUE;
    std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "-------------------- 10000 ADDNUMBER TEST ---------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 10000 spaces" << std::endl;
    std::cout << "Add 10000 random numbers to Span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp2 = Span(10000);
    std::srand(time(NULL));
    for (int i = 0; i < 10000; i++)
        sp2.addNumber(std::rand());
    
    std::cout << BLUE;
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "------------------- 100000 ADDNUMBERS TEST --------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 100000 spaces" << std::endl;
    std::cout << "Add 100000 random numbers to Span using addNumbers" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp3 = Span(100000);
    std::vector<int> vec;
    std::srand(time(NULL));
    for (int i = 0; i < 100000; i++)
        sp3.addNumber(std::rand());
    sp3.addNumbers(vec.begin(), vec.end());

    std::cout << BLUE;
    std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- EXCEPTION TEST ------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 5 spaces" << std::endl;
    std::cout << "Add 10, 23, 3, 18 and 20 to Span" << std::endl;
    std::cout << "Try to add 1 more number to Span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp4 = Span(5);
    sp4.addNumber(10);
    sp4.addNumber(23);
    sp4.addNumber(3);
    sp4.addNumber(18);
    sp4.addNumber(20);

    std::cout << BLUE;
    try
    {
        sp4.addNumber(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 5 spaces" << std::endl;    
    std::cout << "Try to find shortest and longest span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp5 = Span(5);

    std::cout << BLUE;
    try
    {
        std::cout << "Shortest span: " << sp5.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp5.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Span with 5 spaces" << std::endl;
    std::cout << "Add only 1 number to Span" << std::endl;
    std::cout << "Try to find shortest and longest span" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Span sp6 = Span(5);
    
    sp6.addNumber(10);

    std::cout << BLUE;
    try
    {
        std::cout << "Shortest span: " << sp6.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp6.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    { 
        std::cerr << e.what() << std::endl;
    }
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;

}