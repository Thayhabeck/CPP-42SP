/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReinterpretCast.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:46:14 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 16:55:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    float a = 420.042f;

    // Abaixo, a é convertido para um ponteiro para void e depois para um ponteiro para int
    // O valor do ponteiro não é alterado, apenas a forma como o compilador interpreta o valor
    void *b = &a; // Implicit conversion
    int *c = reinterpret_cast<int *>(b); // Explicit conversion
    int &d = reinterpret_cast<int &>(b); // Explicit conversion

    return (0);
}