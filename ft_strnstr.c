/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:20:49 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:21:47 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	register size_t		litlen;
	register size_t		i;

	if ((litlen = ft_strlen(little)) == 0)
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (ft_strncmp((char *)(big + i), little, litlen) == 0)
		{
			if (i + litlen > len)
				return (NULL);
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
