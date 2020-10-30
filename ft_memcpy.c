//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    register unsigned char *d;
    register unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (n--)
        *d++ = *s++;
    return (dest);
}
