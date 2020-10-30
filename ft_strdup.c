/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:04:35 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:06:17 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	register size_t	len;
	void			*tmp;

	len = ft_strlen(s);
	return (((tmp = malloc(len + 1))) ?
				(ft_strncpy(tmp, s, len + 1)) :
					(NULL));
}
