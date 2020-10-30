/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <csibyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:42:49 by csibyl            #+#    #+#             */
/*   Updated: 2020/10/30 19:21:53 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ws_count(char const *s, char c)
{
	register size_t		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void				*leak_fix(char **strings, int count)
{
	while (count--)
		free(strings[count]);
	free(strings);
	return (NULL);
}

static size_t			wlen(char const *s, char c)
{
	register size_t		len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char					**ft_split(char	const *s, char c)
{
	char				**split;
	size_t				words_count;
	size_t				word_len;
	size_t				i;
	size_t				j;

	if (!s || !(words_count = ws_count(s, c)))
		return (NULL);
	if (!(split = (char **)malloc(sizeof(char *) * (words_count + 1))))
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		while (*s == c)
			s++;
		word_len = wlen(s, c);
		if (!(split[i] = (char *)malloc(word_len + 1)))
			return (leak_fix(split, i));
		j = 0;
		while (j < word_len)
			split[i][j++] = *s++;
		split[i++][j] = '\0';
	}
	split[i] = NULL;
	return (split);
}
