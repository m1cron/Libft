/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:08:33 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:09:31 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	register size_t		dlen;
	register size_t		slen;
	register size_t		i;

	slen = ft_strlen(src);
	if (size <= (dlen = ft_strlen(dst)))
		return (slen + size);
	i = dlen;
	size--;
	while (*src != '\0' && i < size)
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (dlen + slen);
}
