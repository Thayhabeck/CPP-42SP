/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:43:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/21 23:12:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceProgram.hpp"

int main(int argc, char *argv[])
{
    ReplaceProgram replaceProgram;

    return (replaceProgram.ReplaceController(argc, argv));
}
