/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:24:41 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:37:56 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal(void);
        AAnimal(std::string type);
        AAnimal(AAnimal const &src);
        virtual ~AAnimal(void);
        AAnimal &operator=(AAnimal const &rhs);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif