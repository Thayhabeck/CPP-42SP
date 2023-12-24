/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:48:27 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 16:42:40 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

// Macros
# define RESET	"\033[0m"
# define GREEN	"\033[32;1m"
# define RED	"\033[31;1m"
# define BLUE	"\033[36;1m"

struct Data {
    private:
        std::string _dataString;
        int _dataNumber;

    public:
        Data(void);
        Data(std::string dataString, int dataNumber);
        ~Data(void);
        Data(Data const &copy);
        Data &operator=(Data const &rhs);

        std::string getDataString(void) const;
        int getDataNumber(void) const;

        void setDataString(std::string private_data);
        void setDataNumber(int private_number);
};

#endif