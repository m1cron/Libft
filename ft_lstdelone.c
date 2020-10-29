//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del)
    {
        del(lst->content);
        free(lst);
        lst = NULL;
    }
}