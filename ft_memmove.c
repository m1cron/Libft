//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n) // TODO
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d < s)
        return (ft_memcpy(dest, src, n));
    else
        return (ft_memcpy(dest + (n - 1), src + (n - 1), n));
}