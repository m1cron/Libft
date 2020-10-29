//
// Created by micron on 10/29/2020.
//

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    register char	*ptr;
    register size_t	beg;
    register size_t	end;

    if (!s1 || !set)
        return (NULL);
    beg = 0;
    while (*(s1 + beg) && ft_strchr(set, *(s1 + beg)))
        beg++;
    if ((end = ft_strlen((s1 + beg))))
        while (*(s1 + beg + end - 1) && ft_strchr(set, *(s1 + beg + end - 1)))
            end--;
    if (!(ptr = malloc(end + 1)))
        return (NULL);
    ft_strncpy(ptr, (s1 + beg), end);
    *(ptr + end) = '\0';
    return (ptr);
}