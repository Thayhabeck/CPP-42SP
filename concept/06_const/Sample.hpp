/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:30:17 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 01:48:49 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample
{
    public:
        
        // Const indica que o valor não pode ser alterado
        float const pi;
        int         qd;

        Sample(float const f);
        ~Sample(void);

        void bar(void) const;
};

#endif