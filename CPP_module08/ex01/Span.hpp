/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:58:05 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 21:11:31 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define BLUE    "\033[1;34m"

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vec;
        Span();
    public:
        Span(unsigned int n);
        Span(Span const &copy);
        Span &operator=(Span const &og);
        ~Span();

        void addNumber(int n);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

        class FullSpanException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class NoSpanException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

#endif
