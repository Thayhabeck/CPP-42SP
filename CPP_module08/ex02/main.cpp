/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:46:05 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/30 02:46:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void subjectTest() 
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::stack<int> s(mstack);
}

int main()
{
    std::cout << std::endl;
    std::cout << "---------------------- MUTANT STACK TEST ----------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- SUBJECT TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;
    subjectTest();
    std::cout << RESET << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- DESCRIPTION TEST ----------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "---------------------- MUTANT STACK - INT ---------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a MutantStack of int..." << std::endl;
    std::cout << "Push 5, 17..." << std::endl;
    std::cout << "Display top (top is the last element pushed)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Pop the top element" << std::endl;
    std::cout << "Display size" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Push 3, 5, 737, 0" << std::endl;
    std::cout << "Create iterator 'it', using begin" << std::endl;
    std::cout << "Create iterator 'ite', using end" << std::endl;
    std::cout << "Increment 'it'" << std::endl;
    std::cout << "Display the value of 'it'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << "it: " << *it << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Decrement 'it'" << std::endl;
    std::cout << "Display the value of 'it'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    --it;
    std::cout << "it: " << *it << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Display the mutant stack using iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    std::cout << "stack: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a std::stack copy of the mutant stack" << std::endl;
    std::cout << "Display the stack using top and pop, because std::stack doesn't have iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    std::stack<int> s(mstack);
    std::cout << "copy: ";
    while (!s.empty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << RESET << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "------------------------- LIST - INT --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a list of int..." << std::endl;
    std::cout << "Push 5, 17..." << std::endl;
    std::cout << "Display back (back is the last element pushed)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << "back: " << list.back() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Pop the back element" << std::endl;
    std::cout << "Display size" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    list.pop_back();
    std::cout << "size: " << list.size() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Push 3, 5, 737, 0" << std::endl;
    std::cout << "Create iterator 'it2', using begin" << std::endl;
    std::cout << "Create iterator 'ite2', using end" << std::endl;
    std::cout << "Increment 'it2'" << std::endl;
    std::cout << "Display the value of 'it2'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    ++it2;
    std::cout << "it: " << *it2 << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Decrement 'it2'" << std::endl;
    std::cout << "Display the value of 'it2'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    --it2;
    std::cout << "it: " << *it2 << std::endl;
    
    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Display the list using iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    std::cout << "list: ";
    while (it2 != ite2)
    {
        std::cout << *it2 << " ";
        ++it2;
    }
    std::cout << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a std::list copy of the list" << std::endl;
    std::cout << "Display the list using back and pop_back, despite std::list has iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << BLUE;

    std::list<int> list2(list);
    std::cout << "copy: ";
    while (!list2.empty())
    {
        std::cout << list2.back() << " ";
        list2.pop_back();
    }
    std::cout << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "---------------------- MUTANT STACK - CHAR --------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a MutantStack of char..." << std::endl;
    std::cout << "Push 'a', 'b'..." << std::endl;
    std::cout << "Display top (top is the last element pushed)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    MutantStack<char> mstack2;
    mstack2.push('a');
    mstack2.push('b');
    std::cout << "top: " << mstack2.top() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Pop the top element" << std::endl;
    std::cout << "Display size" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    mstack2.pop();
    std::cout << "size: " << mstack2.size() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Push 'c', 'd', 'e', 'f'" << std::endl;
    std::cout << "Create iterator 'it3', using begin" << std::endl;
    std::cout << "Create iterator 'ite3', using end" << std::endl;
    std::cout << "Increment 'it3'" << std::endl;
    std::cout << "Display the value of 'it3'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    mstack2.push('c');
    mstack2.push('d');
    mstack2.push('e');
    mstack2.push('f');
    MutantStack<char>::iterator it3 = mstack2.begin();
    MutantStack<char>::iterator ite3 = mstack2.end();
    ++it3;
    std::cout << "it: " << *it3 << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Decrement 'it3'" << std::endl;
    std::cout << "Display the value of 'it3'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    --it3;
    std::cout << "it: " << *it3 << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Display the mutant stack using iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::cout << "stack: ";
    while (it3 != ite3)
    {
        std::cout << *it3 << " ";
        ++it3;
    }
    std::cout << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a std::stack copy of the mutant stack" << std::endl;
    std::cout << "Display the stack using top and pop, because std::stack doesn't have iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::stack<char> s2(mstack2);
    std::cout << "copy: ";
    while (!s2.empty())
    {
        std::cout << s2.top() << " ";
        s2.pop();
    }
    std::cout << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "------------------------- LIST - CHAR -------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a list of char..." << std::endl;
    std::cout << "Push 'a', 'b'..." << std::endl;
    std::cout << "Display back (back is the last element pushed)" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::list<char> list3;
    list3.push_back('a');
    list3.push_back('b');
    std::cout << "back: " << list3.back() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Pop the back element" << std::endl;
    std::cout << "Display size" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    list3.pop_back();
    std::cout << "size: " << list3.size() << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Push 'c', 'd', 'e', 'f'" << std::endl;
    std::cout << "Create iterator 'it4', using begin" << std::endl;
    std::cout << "Create iterator 'ite4', using end" << std::endl;
    std::cout << "Increment 'it4'" << std::endl;
    std::cout << "Display the value of 'it4'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    list3.push_back('c');
    list3.push_back('d');
    list3.push_back('e');
    list3.push_back('f');
    std::list<char>::iterator it4 = list3.begin();
    std::list<char>::iterator ite4 = list3.end();
    ++it4;
    std::cout << "it: " << *it4 << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Decrement 'it4'" << std::endl;
    std::cout << "Display the value of 'it4'" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    --it4;
    std::cout << "it: " << *it4 << std::endl;

    std::cout << RESET;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Display the list using iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::cout << "list: ";
    while (it4 != ite4)
    {
        std::cout << *it4 << " ";
        ++it4;
    }
    std::cout << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a std::list copy of the list" << std::endl;
    std::cout << "Display the list using back and pop_back, despite std::list has iterators" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << GREEN;

    std::list<char> list4(list3);
    std::cout << "copy: ";
    while (!list4.empty())
    {
        std::cout << list4.back() << " ";
        list4.pop_back();
    }
    std::cout << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "---------------------- END OF TEST ----------------------------" << std::endl;
    return 0;
}
