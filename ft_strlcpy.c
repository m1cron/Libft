#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size);
{
    const size_t len;

    len = ft_strlen(src);
    if (size != 0)
    {
        ft_memcpy(dst, src, size - 1);
        dst[size] = '\0';
    }
    else if (len + 1 < size)
    {
        ft_memcpy(dst, scr, size - 1);
    }
    return (len);
}