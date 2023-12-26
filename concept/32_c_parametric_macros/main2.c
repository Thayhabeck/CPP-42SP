/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:08:24 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 14:33:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


struct int_list_s {int     n; struct  int_list_s *next; };
struct float_list_s {float     z; struct  float_list_s *next; };
struct string_list_s {char     *str; struct  string_list_s *next; };

typedef struct int_list_s int_list_t;
typedef struct float_list_s float_list_t;
typedef struct string_list_s string_list_t;

int_list_t *int_list_new(int n);
float_list_t *float_list_new(float z);
string_list_t *string_list_new(char *str);

void int_list_delete(int_list_t **list);
void float_list_delete(float_list_t **list);
void string_list_delete(string_list_t **list);

/*############################################################################*/

struct list_s {
    void *content;
    size_t size;
    struct list_s *next;
};

typedef struct list_s list_t;

list_t *list_new(void *content, size_t size);
void list_delete(list_t **list);

/*############################################################################*/

int main(void)
{
    int_list_t *int_list = int_list_new(42);
    float_list_t *float_list = float_list_new(42.42f);
    string_list_t *string_list = string_list_new("42");

    printf("int_list: %d\n", int_list->n);
    printf("float_list: %f\n", float_list->z);
    printf("string_list: %s\n", string_list->str);

    int_list_delete(&int_list);
    float_list_delete(&float_list);
    string_list_delete(&string_list);

    printf("int_list: %p\n", int_list);
    printf("float_list: %p\n", float_list);
    printf("string_list: %p\n", string_list);

    return (0);
}
