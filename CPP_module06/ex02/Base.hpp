/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:47:45 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 10:38:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

// Macros
# define RESET   "\033[0m"
# define GREEN   "\033[1;32m"
# define BLUE    "\033[1;34m"
# define RED     "\033[1;31m"

// Base class
class Base
{
    public:
        virtual ~Base(void);
};

// Inherited classes
class A : public Base {};
class B : public Base {};
class C : public Base {};

// Functions
Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif