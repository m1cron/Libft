//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    register char *join;
    register size_t s1len;
    register size_t s2len;

    if (!s1 && !s2)
        return (NULL);
    else if (!s1)
        return (ft_strdup(s2));
    else if (!s2)
        return (ft_strdup(s1));
    if (!(join = (char *)malloc((s1len = ft_strlen(s1)) + (s2len = ft_strlen(s2)) + 1)))
        return (NULL);
    ft_strlcpy(join, s1, s1len + 1);
    ft_strlcat(join + s1len, s2, s2len + 1);
    return (join);
}