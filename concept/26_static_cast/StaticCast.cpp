/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:23:03 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 12:33:46 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    int a = 42;

    double b = a;                   // Implicit conversion

    // A conversão abaixo não é indicada, pois o compilador não vai avisar se
    // a conversão está sendo feita de forma errada
    int c = b;                      // Implicit conversion => Hell no!

    // A conversão abaixo é indicada, pois o compilador vai avisar se
    // a conversão está sendo feita de forma errada
    int d = static_cast<int>(b);    // Explicit conversion => OK

    return (0);
}