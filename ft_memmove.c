//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    register unsigned char *d;
    register unsigned char *s;

    if (!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
        return (ft_memcpy(dest, src, n));
    else
    {
        d += n - 1;
        s += n - 1;
        while (n--)
            *d-- = *s--;
    }
    return (dest);
}