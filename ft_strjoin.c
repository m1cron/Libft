/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:06:33 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:08:16 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	register char	*join;
	register size_t	s1len;
	register size_t	s2len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(join = (char *)malloc(s1len + s2len + 1)))
		return (NULL);
	ft_strlcpy(join, s1, s1len + 1);
	ft_strlcat(join + s1len, s2, s2len + 1);
	return (join);
}
