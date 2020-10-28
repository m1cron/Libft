//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while ((*s) && (*s) != c)
        s++;
    if ((*s) == c)
        return ((char *)s);
    return (NULL);
}