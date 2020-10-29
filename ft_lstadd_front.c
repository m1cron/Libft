//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst)
    {
        if (new)
            new->next = *lst;
        *lst = new;
    }
}