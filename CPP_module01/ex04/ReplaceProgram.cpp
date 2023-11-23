/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceProgram.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:15:19 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/22 14:38:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceProgram.hpp"
#include "ReplaceService.hpp"

ReplaceProgram::ReplaceProgram() { }

ReplaceProgram::~ReplaceProgram() { }

int ReplaceProgram::ReplaceController(int argc, char *argv[])
{
    ReplaceService replaceService;

    if (replaceService.validateParams(argc, argv))
        return (1);
    if (replaceService.replaceFunction())
        return (1);
    return (0);
}
