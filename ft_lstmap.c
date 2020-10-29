//
// Created by micron on 10/30/2020.
//

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*newList;
    t_list	*newContent;

    if (!del || !f)
        return (NULL);
    newList = NULL;
    while (lst)
    {
        if (!(newContent = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&newContent, del);
            return (NULL);
        }
        ft_lstadd_back(&newList, newContent);
        lst = lst->next;
    }
    return (newList);
}