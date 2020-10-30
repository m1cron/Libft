//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_strdup(const char *s)
{
    register size_t len;
    void *tmp;

    return (((tmp = malloc((len = ft_strlen(s)) + 1))) ?
            (ft_memcpy(tmp, s, len)) :
            (NULL));
}