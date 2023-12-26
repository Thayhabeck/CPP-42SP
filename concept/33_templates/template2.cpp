/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:26:29 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 16:32:07 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class list
{
    public:
        list<T>(T const &content) : _content(content) {}
        list<T>(T const &list) : _content(list._content) {}
        list<T>(void) {}

    private:
        T       *_content;
        list<T> *_next;
};

int main(void)
{
    list<int> a(42);
    list<float> b(42.42f);
    list<char> c('a');
    list< list<int> > c(a);

    return (0);
}