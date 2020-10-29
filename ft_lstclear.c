//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *)) {
    t_list *current;

    if (!lst || !*lst || !del)
        return ;
    while (*lst) {
        current = (*lst)->next;
        del(*lst);
        *lst = current;
    }
    *lst = NULL;
}