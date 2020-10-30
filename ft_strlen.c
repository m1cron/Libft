/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:12:14 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:12:40 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(register const char *s)
{
	register const char *tmp;

	tmp = s;
	while (*tmp++)
		;
	return (tmp - s - 1);
}
