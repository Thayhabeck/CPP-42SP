/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:06:46 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 14:50:24 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     maxInt(int x, int y) { return (x >= y ? x : y); }
float   maxFloat(float x, float y) { return (x >= y ? x : y); }
char    maxChar(char x, char y) { return (x >= y ? x : y); }

int foo(int x) { printf("Long Computing time\n"); return (x); }

#define max(x, y)   ((x) >= (y) ? (x) : (y))

int     main(void)
{
    int a = 21;
    int b = 42;

    printf("max of %d and %d is %d\n", a, b, maxInt(a, b));
    printf("max of %d and %d is %d\n", a, b, max(a, b));

    float c = -1.7f;
    float d = 4.2f;

    printf("max of %f and %f is %f\n", c, d, maxFloat(c, d));
    printf("max of %f and %f is %f\n", c, d, max(c, d));

    char e = 'a';
    char f = 'z';

    printf("max of %c and %c is %c\n", e, f, maxChar(e, f));
    printf("max of %c and %c is %c\n", e, f, max(e, f));

    // But..
    // A macro demora mais tempo para ser executada pois ele é substituido pelo seu valor em tempo de compilação
    // Já a função é executada em tempo de execução, então é mais rápido
    // A macro é executada quando é definida e não quando é chamada
    // A função é executada apenas quando é chamada e não quando é definida
    // A macro não tem tipo, então se passar um tipo errado, não vai dar erro
    // A macro não tem escopo, então se tiver uma variavel com o mesmo nome, vai dar erro
    // A macro não tem proteção de argumentos, então se passar um argumento errado, não vai dar erro

    printf("max of %d and %d is %d\n", a, b, maxInt(foo(a), foo(b)));
    printf("max of %d and %d is %d\n", a, b, max(foo(a), foo(b)));


    return (0);
}