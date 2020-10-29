//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;

    if (lst && (current = *lst))
    {
        while (current->next)
            current = current->next;
        current->next = new;
    }
    else if (lst)
        *lst = new;
}