/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:04:17 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>
#include <string>

class Sample
{
    public:
        Sample( int n );
        ~Sample(void);

        int     getFoo(void) const;
        
        // Para comparar dois objetos, é necessário que a classe tenha uma função compare.
        // A função compare retorna um inteiro que indica se o objeto atual é menor,
        // igual ou maior que o objeto passado como argumento.
        int     compare(Sample * other) const;

    private:
        int     _foo;
};

#endif