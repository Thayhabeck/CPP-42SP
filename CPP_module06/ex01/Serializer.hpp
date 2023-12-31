/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:46:24 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/24 16:42:08 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

// Macros
# define RESET	"\033[0m"
# define YELLOW	"\033[33;1m"

struct Data;

class Serializer {
    private:
        Serializer(void);
        ~Serializer(void);
        Serializer(Serializer const &copy);
        Serializer &operator=(Serializer const &rhs);

    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif