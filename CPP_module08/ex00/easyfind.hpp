/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:32:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 18:44:26 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define YELLOW  "\033[1;33m"

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::exception();
    return (it);
}

#endif
