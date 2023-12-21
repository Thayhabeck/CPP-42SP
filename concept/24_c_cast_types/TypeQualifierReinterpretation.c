/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeQualifierReinterpretation.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:36:42 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 11:45:11 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    // Reinterpretação de qualificadores de tipo é um cast que não altera o valor, apenas a forma como ele é interpretado
    int a = 42; // Reference value

    int const *b = &a;          // Implicit type qualifier reinterpretation
    int const *c = (int const *) &a;  // Explicit type qualifier reinterpretation

    int const *d = &a;          // Implicit promotion => OK
    // Os dois abaixo são perigosos, pois o compilador não sabe que tipo de dado está sendo apontado, 
    // uma vez que o ponteiro não é constante
    int *e = d;              // Implicit demotion => Hell no! - não é possível atribuir um ponteiro constante a um ponteiro não constante
    int *f = (int *) d;      // Explicit demotion => OK, I obey

    return (0);
}