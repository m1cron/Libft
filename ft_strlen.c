#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (*s++)
        len++;
    return (len);    
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