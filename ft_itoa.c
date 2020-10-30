/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:40:56 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 14:41:00 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digit_len(int n)
{
	register int	len;

	len = 1;
	while ((n /= 10))
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	register char	*itoa;
	register int	len;
	register int	digit;
	char			minus;

	minus = (n < 0) ? 1 : 0;
	len = ft_digit_len(n) + minus;
	if (!(itoa = (char *)malloc(len + 1)))
		return (NULL);
	*(itoa + len--) = '\0';
	while (len >= minus)
	{
		digit = n % 10;
		*(itoa + len--) = FT_ABS(digit) + '0';
		n /= 10;
	}
	if (minus)
		*itoa = '-';
	itoa[len - 1] = '\0';
	return (itoa);
}
