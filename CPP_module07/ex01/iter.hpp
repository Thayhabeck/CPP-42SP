/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:02:34 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 10:43:21 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
void iter(T *array, size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void randonColorPrint(T const &x)
{
    std::string color[] = {"\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m"};
    std::cout << color[std::rand() % 5] << x << "\033[0m" << std::endl;
}

#endif