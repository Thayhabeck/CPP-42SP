/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Explicit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:25:00 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/21 17:35:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A {};
class B {};

class C {
    public:
        
        // A ausencia da palavra-chave explícita na frente do construtor permite a conversão implícita.
        // Isso significa que o construtor sem a palavra-chave explícita pode ser usado para converter
        // implicitamente o parâmetro para o tipo da classe.
        C(A const & _) {return ;}
        // O uso da palavra-chave explícita na frente do construtor desativa a conversão implícita.
        // Isso significa que o construtor com a palavra-chave explícita não pode ser usado para converter 
        // implicitamente o parâmetro para o tipo da classe.
        explicit C(B const & _) {return ;}
};

// Na função f, o parâmetro é uma referência constante para um objeto do tipo C.
// O parâmetro pode ser inicializado com um objeto do tipo C ou com um objeto do tipo A.
// No entanto, o parâmetro não pode ser inicializado com um objeto do tipo B, 
// pois o construtor de C que recebe um objeto do tipo B é explicito.
void f(C const & _) {return ;}

int main(void)
{
    // Neste caso a função f pode ser chamada com um objeto do tipo A,
    // pois o construtor de C que recebe um objeto do tipo A é implicito.

    f (A()); // OK

    // Neste caso a função f não pode ser chamada com um objeto do tipo B, 
    // pois o construtor de C que recebe um objeto do tipo B é explicito.

//    f (B()); // error: no matching function for call to 'f'

    return 0;
}

