//
// Created by micron on 10/29/2020.
//

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dlen;
    size_t slen;
    size_t i;

    slen = ft_strlen(src);
    if (size <= (dlen = ft_strlen(dst)))
        return (slen + size);
    i = dlen, size--;
    while (*src != '\0' && i < size)
        *(dst + i++) = *src++;
    *(dst + i) = '\0';
    return (dlen + slen);
}