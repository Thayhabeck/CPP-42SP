/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:31:04 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 17:35:33 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::list<int> lst;

    lst.push_back(10);
    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(20);

    std::for_each(lst.begin(), lst.end(), displayInt);
    
    return (0);
}
