/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:09:29 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:05:02 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>
#include <string>

class Sample
{
    public:
        Sample(void);
        ~Sample(void);

        // getters and setters são funções que permitem acessar e modificar os atributos de uma classe.
        // os getters e setters são conhecidos como acessors.
        int     getFoo(void) const;
        void    setFoo(int v);

    private:
        int     _foo;
};

#endif