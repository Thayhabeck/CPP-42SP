/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:43:12 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/30 02:03:18 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {};
        virtual ~MutantStack() {};

        MutantStack &operator=(MutantStack const &op)
        {
            if (this != &op)
                std::stack<T>::operator=(op);
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }
};

#endif