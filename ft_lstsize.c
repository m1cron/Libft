//
// Created by micron on 10/29/2020.
//

#include "libft.h"

int     ft_lstsize(t_list *lst)
{
    register int size;
    t_list *tmp;

    size = 0;
    tmp = lst;
    while (tmp)
        tmp = tmp->next, size++;
    return (size);
}