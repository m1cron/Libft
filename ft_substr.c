//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dst;

    if (!s || start + len > ft_strlen(s))
        return (NULL);
    if ((dst = malloc(sizeof(*s) * (len + 1))))
    {
        dst = ft_memcpy(dst, s + start, len);
        dst[len] = '\0';
    }
    return (dst);
}