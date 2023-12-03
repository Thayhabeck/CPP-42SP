/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 21:22:10 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample
{
    public:

        Sample( void );
        ~Sample( void );

        void    bar( char const c ) const;
        void    bar( int const n ) const;
        void    bar( float const z ) const;
        void    bar( Sample const & i ) const;
};

#endif