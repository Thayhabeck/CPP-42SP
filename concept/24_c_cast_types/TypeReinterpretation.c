/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeReinterpretation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:00:16 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 11:21:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    // Reinterpretação de tipos é um cast que não altera o valor, apenas a forma como ele é interpretado
    float a = 420.042f;         // Reference value
    void *b = &a;               // Implicit reinterpretation cast
    void *c = (void *) &a;      // Explicit reinterpretation cast

    void *d = &a;               // Implicit promotion => OK
    int *e = d;               // Implicit demotion => Hazardeous
    int *f = (int *) d;     // Explicit demotion => OK, I obey

    printf("%p = %f\n", &a, a);

    printf("%p\n", b);
    printf("%p\n", c);

    printf("%p\n", d);
    // Os dois abaixo são perigosos, pois o compilador não sabe que tipo de dado está sendo apontado
    printf("%p = %d\n", e, *e);
    printf("%p = %d\n", f, *f);
}