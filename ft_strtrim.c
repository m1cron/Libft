/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:23:19 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:24:23 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	register char	*ptr;
	register size_t	beg;
	register size_t	end;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (*(s1 + beg) && ft_strchr(set, *(s1 + beg)))
		beg++;
	if ((end = ft_strlen((s1 + beg))))
		while (*(s1 + beg + end - 1) && ft_strchr(set, *(s1 + beg + end - 1)))
			end--;
	if (!(ptr = malloc(end + 1)))
		return (NULL);
	ft_strncpy(ptr, (s1 + beg), end);
	*(ptr + end) = '\0';
	return (ptr);
}
