/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceProgram.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:13:17 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/21 15:15:00 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEPROGRAM_HPP
# define REPLACEPROGRAM_HPP

#include <iostream>
#include <fstream>
#include <string>

class ReplaceProgram
{
public:
    ReplaceProgram();
    ~ReplaceProgram();

    static int ReplaceController(int argc, char *argv[]);
};

#endif