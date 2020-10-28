#include "libft.h"

size_t  ft_strlen(const char *s)
{
    const char *tmp;

    if (!s)
        return (0);
    tmp = s;
    while (*tmp++)
        ;
    return (tmp - s - 1);
}

#include <stdio.h>
int main(void) {
    char lol[] = "123434556346";
    char lol1[] = "0";
    char lol2[] = "";

    printf("%lu\t\t%lu\n", strlen(lol), ft_strlen(lol));
    printf("%lu\t\t%lu\n", strlen(lol1), ft_strlen(lol1));
    printf("%lu\t\t%lu\n", strlen(lol2), ft_strlen(lol2));
}