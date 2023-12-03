/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:12:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 20:48:50 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_HPP
# define SAMPLE1_HPP

#include "iostream"

struct Sample1
{
    int     foo;

    Sample1(void);
    ~Sample1(void);

    void    bar(void) const;

};

#endif