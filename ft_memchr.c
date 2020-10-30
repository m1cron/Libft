/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:50:23 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 13:51:00 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	register unsigned char *src;
	register unsigned char equals;

	src = (unsigned char *)s;
	equals = (unsigned char)c;
	while (n--)
	{
		if (*src == equals)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
