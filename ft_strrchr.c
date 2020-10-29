//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    if ((char)c == '\0')
        return ((char *)s + i);
    while (i--)
    {
        if (*(s + i) == c)
            return ((char *)(s + i));
    }
    return (NULL);
}
