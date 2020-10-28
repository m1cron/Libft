//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *src;
    unsigned char equals;

    src = (const unsigned char *)s;
    equals = (unsigned char)c;
    while (n--)
    {
        if (*src == equals)
            return ((void *)src);
        src++;
    }
    return (NULL);
}