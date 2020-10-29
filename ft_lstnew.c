//
// Created by micron on 10/29/2020.
//

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *ptr;

    if ((ptr = (t_list *)malloc(sizeof(t_list))))
    {
        if (!content)
            ptr->content = NULL;
        else
            ptr->content = content;
        ptr->next = NULL;
    }
    return (ptr);
}