//
// Created by micron on 10/29/2020.
//


#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    register size_t      litlen;
    register size_t		i;

    if ((litlen = ft_strlen(little)) == 0)
        return ((char *)big);
    if (litlen > len)
        return (NULL);
    i = 0;
    while (i < len)
    {
        if (ft_strncmp((char *)(big + i), little, litlen) == 0)
        {
            if (i + litlen > len)
                return (NULL);
            return ((char *)(big + i));
        }
        i++;
    }
    return (NULL);
}