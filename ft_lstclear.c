//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *)) {
    t_list *current;

    if (!lst || !del)
        return ;
    while (*lst) {
        del((*lst)->content);
        current = *lst;
        *lst = current->next;
        free(current);
    }
    *lst = NULL;
}