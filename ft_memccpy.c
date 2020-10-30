//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    register size_t  i;

    i = 0;
    while (n--)
    {
        if ((((unsigned char*)dest)[i] = *(unsigned char*)src++) == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}