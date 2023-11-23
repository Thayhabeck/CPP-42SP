/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceService.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:18:58 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/22 14:33:42 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESERVICE_HPP
# define REPLACESERVICE_HPP

#include <iostream>
#include <fstream>
#include <string>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string BLUE = "\033[36;1m";

class ReplaceService
{
    private:
        std::string _filename;
        std::string _strToFind;
        std::string _strToReplace;

        void replaceLine(std::string& line);

    public:
        ReplaceService();
        ~ReplaceService();

        int validateParams(int argc, char *argv[]);
        int replaceFunction(void);
};

#endif