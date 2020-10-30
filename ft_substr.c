/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:24:49 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:25:15 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	if ((dst = malloc(sizeof(*s) * (len + 1))))
	{
		dst = ft_memcpy(dst, s + start, len);
		dst[len] = '\0';
	}
	return (dst);
}
