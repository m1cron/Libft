/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:54:13 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 13:54:31 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	register unsigned char *dest;
	register unsigned char ch;

	dest = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
		*dest++ = ch;
	return (s);
}
