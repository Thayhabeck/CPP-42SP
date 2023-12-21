/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SingleCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:44:49 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 10:58:58 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void dump_32bits_integer(int const n);
void dump_64bits_double(double const z);

int main(void)
{
    int a = 42;

    double b = a; // implicit conversion
    //A conversão de um dado mais preciso para um menos preciso pode ocasionar perda de dados, por isso é necessário o cast
    double c = (double)a; // explicit conversion (cast notation)

    double d = a;
    int e = d; // implicit conversion   
    int f = (int)d; // explicit conversion (cast notation)

    dump_32bits_integer(a);

    dump_64bits_double(b);
    dump_64bits_double(c);

    dump_64bits_double(d);
    dump_32bits_integer(e);
    dump_32bits_integer(f);
}