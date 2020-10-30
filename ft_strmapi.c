//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    register char *foreach;
    register unsigned int i;

    if (s && f && (foreach = (char *) malloc(ft_strlen(s))))
    {
        i = 0;
        while (s[i])
            foreach[i] = f(i, s[i]), i++;
        foreach[i] = '\0';
        return (foreach);
    }
    return (NULL);
}