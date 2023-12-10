/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ci1.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:19:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 17:21:20 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A classe Cat possui três classes aninhadas: Leg, Tail e Head.
class Cat {
public:
    class Leg {
    public:
        Leg();
        ~Leg();
    };
    class Tail {
    public:
        Tail();
        ~Tail();
    };
    class Head {
    public:
        Head();
        ~Head();
    };
    Cat();
    ~Cat();
};

// Na main, podemos instanciar as classes aninhadas da seguinte forma:
int main(void)
{
    Cat::Leg leg;
    Cat::Tail tail;
    Cat::Head head;
    return (0);
}
