#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}

#include <stdio.h>
int main(void) {
    char lol[] = "12345";
    char lol1[] = "12345";

    char lol2[] = "12345";
    char lol3[] = "12349";

    char lol4[] = "12349";
    char lol5[] = "12345";

    printf("%d\t\t%d\n", memcmp(lol, lol1, 5), ft_memcmp(lol, lol1, 5));
    printf("%d\t\t%d\n", memcmp(lol2, lol3, 5), ft_memcmp(lol2, lol3, 5));
    printf("%d\t\t%d\n", memcmp(lol4, lol5, 5), ft_memcmp(lol4, lol5, 5));
}