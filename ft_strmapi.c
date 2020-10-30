/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:13:06 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:17:22 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	register char			*foreach;
	register unsigned int	i;

	if (s && f && (foreach = (char *)malloc(ft_strlen(s))))
	{
		i = 0;
		while (s[i])
		{
			foreach[i] = f(i, s[i]);
			i++;
		}
		foreach[i] = '\0';
		return (foreach);
	}
	return (NULL);
}
