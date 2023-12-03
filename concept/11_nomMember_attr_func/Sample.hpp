/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/23 22:03:21 by thabeck-         ###   ########.fr       */
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

        // Funções estáticas não são associadas a uma instância específica.
        static int     getNbInst(void);

    private:
        // Membros estáticos são compartilhados por todas as instâncias de uma classe.
        static int     _nbInst;
};

#endif