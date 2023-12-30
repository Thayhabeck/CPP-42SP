/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:34:08 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 18:49:50 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // Create a vector, a list and a deque of ints
    std::vector<int> vec;
    std::list<int> lst;
    std::deque<int> deq;

    // Add some values to vector
    vec.push_back(10);
    vec.push_back(23);
    vec.push_back(3);
    vec.push_back(17);
    vec.push_back(20);

    // Add some values to list
    lst.push_back(10);
    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(20);

    // Add some values to deque
    deq.push_back(10);
    deq.push_back(23);
    deq.push_back(3);
    deq.push_back(17);
    deq.push_back(20);

    std::cout << std::endl;
    std::cout << "---------------------- EASYFIND TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- VECTOR TEST ---------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Find 3, 10, 20, 23, 17 and 100 in vector" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    try
    {
        std::cout << *easyfind(vec, 3) << std::endl;
        std::cout << *easyfind(vec, 10) << std::endl;
        std::cout << *easyfind(vec, 20) << std::endl;
        std::cout << *easyfind(vec, 23) << std::endl;
        std::cout << *easyfind(vec, 17) << std::endl;
        std::cout << *easyfind(vec, 100) << std::endl;
        std::cout << *easyfind(vec, 17) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Not found" RESET << std::
        endl;
    }

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- LIST TEST -----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Find 3, 10, 20, 23, 17 and 100 in list" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;
    try 
    {
        std::cout << *easyfind(lst, 3) << std::endl;
        std::cout << *easyfind(lst, 10) << std::endl;
        std::cout << *easyfind(lst, 20) << std::endl;
        std::cout << *easyfind(lst, 23) << std::endl;
        std::cout << *easyfind(lst, 17) << std::endl;
        std::cout << *easyfind(lst, 100) << std::endl;
        std::cout << *easyfind(lst, 17) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Not found" RESET << std::
        endl;
    }

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- DEQUE TEST ----------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Find 3, 10, 20, 23, 17 and 100 in deque" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << YELLOW;
    try 
    {
        std::cout << *easyfind(deq, 3) << std::endl;
        std::cout << *easyfind(deq, 10) << std::endl;
        std::cout << *easyfind(deq, 20) << std::endl;
        std::cout << *easyfind(deq, 23) << std::endl;
        std::cout << *easyfind(deq, 17) << std::endl;
        std::cout << *easyfind(deq, 100) << std::endl;
        std::cout << *easyfind(deq, 17) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED "Not found" RESET << std::
        endl;
    }
    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END TEST ------------------------------" << std::endl;

    return (0);
}