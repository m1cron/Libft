//
// Created by micron on 10/29/2020.
//

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}