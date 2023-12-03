/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/18 19:18:50 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample
{
    public:

        // Atributos (member attributes)
        int     foo;

        // Construtor e destrutor
        Sample( void );
        ~Sample( void );

        // Métodos (member function)
        void    bar( void ) const;
};

#endif