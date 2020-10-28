//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *dest;
    unsigned char ch;

    dest = (unsigned char *)s;
    ch = (unsigned char)c;
    while (n--)
        *dest++ = ch;
    return (s);
}