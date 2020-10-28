#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    if (size)
    {
        ft_memcpy(dst, src, size - 1);
        dst[size] = '\0';
    }
    return (ft_strlen(src));
}