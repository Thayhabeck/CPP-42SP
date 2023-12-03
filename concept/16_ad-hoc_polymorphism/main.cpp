/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:24:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 21:26:11 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int main(void)
{
    Sample instance;

    instance.bar('a');
    instance.bar(42);
    instance.bar(4.2f);
    instance.bar(instance);

    return (0);
}

// $> c++ -Wall -Wextra -Werror main.cpp Sample.cpp -o adhoc