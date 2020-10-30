/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:24:49 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 19:16:40 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;

	if (!s)
		return (0);
	if ((slen = ft_strlen(s)) + 1 > start)
		slen = (len >= slen - start + 1 ? slen - start + 1 : len);
	else
		slen = 0;
	if (!(dst = (char *)malloc(slen + 1)))
		return (NULL);
	ft_strncpy(dst, s + start, slen);
	dst[len] = '\0';
	return (dst);
}
