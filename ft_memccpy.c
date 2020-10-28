//
// Created by micron on 28.10.2020.
//

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n) //TODO
{
    void    *ptr;

    ptr = ft_memchr(src, c, n);
    if (ptr != NULL)
        return (ft_memcpy(dest, src, ptr - src + 1));
    //memcpy(dest, src, n);
    return (NULL);
}