//
// Created by micron on 10/29/2020.
//

#include "libft.h"

static int		ft_digit_len(int n)
{
    register int len;

    len = 1;
    while ((n /= 10))
        len++;
    return (len);
}

char			*ft_itoa(int n) {
    register char *itoa;
    register int len;
    register int digit;
    char minus;

    minus = (n < 0) ? 1 : 0;
    if (!(itoa = (char *) malloc((len = ft_digit_len(n) + minus))))
        return (NULL);
    *(itoa + len--) = '\0';
    while (len >= minus) {
        digit = n % 10;
        *(itoa + len--) = FT_ABS(digit) + '0';
        n /= 10;
    }
    if (minus)
        *itoa = '-';
    return (itoa);
}