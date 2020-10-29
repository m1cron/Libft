#include "libft.h"

size_t  ft_strlen(register const char *s)
{
    register const char *tmp;

    if (!s)
        return (0);
    tmp = s;
    while (*tmp++)
        ;
    return (tmp - s - 1);
}