/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:03:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 21:18:45 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
    _vec.reserve(n);
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &og)
{
    if (this != &og)
    {
        this->_n = og._n;
        this->_vec = og._vec;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (_vec.size() < _n)
        _vec.push_back(n);
    else
        throw FullSpanException();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_vec.size() + std::distance(begin, end) <= _n)
        _vec.insert(_vec.end(), begin, end);
    else
        throw FullSpanException();
}

int Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw NoSpanException();
    std::vector<int> tmp(_vec);
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = std::abs(tmp[i] - tmp[i - 1]);
    }
    return (min);
}

int Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw NoSpanException();
    int min = *std::min_element(_vec.begin(), _vec.end());
    int max = *std::max_element(_vec.begin(), _vec.end());
    return (max - min);
}

const char* Span::FullSpanException::what() const throw()
{
    return (RED "Span is full" RESET);
}

const char* Span::NoSpanException::what() const throw()
{
    return (RED "Span is empty or has only one element" RESET);
}
