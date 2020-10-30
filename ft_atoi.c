/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:44:56 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 13:07:32 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	register unsigned	res;
	char				sign;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign = -1;
	res = 0;
	while (ft_isdigit(*nptr))
	{
		if (res >= 2147483647 && (*nptr - '0') > 7)
			return ((sign == 1) ? -1 : 0);
		res = res * 10 + (*nptr++ - '0');
	}
	return ((int)(res * sign));
}
