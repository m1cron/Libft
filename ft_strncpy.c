//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    register size_t	i;

    i = 0;
    while (*(src + i) && i < n)
        *(dest + i) = *(src + i), i++;
    while (i < n)
        *(dest + i) = '\0', i++;
    return (dest);
}