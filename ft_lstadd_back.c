/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:21:40 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/31 17:58:08 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*endlst;

	if (!lst)
		return ;
	if (*lst)
	{
		if ((endlst = ft_lstlast(*lst)))
			endlst->next = new;
	}
	else
		*lst = new;
}
