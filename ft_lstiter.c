//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
