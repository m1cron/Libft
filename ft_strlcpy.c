#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (!dst || !src)
        return (0);
    if (size != 0)
    {
        i = 0, size--;
        while (*(src + i) && i < size)
            *(dst + i) = *(src + i), i++;
        *(dst + i) = '\0';
    }
    return (ft_strlen(src));
}