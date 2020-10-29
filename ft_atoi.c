//
// Created by micron on 10/29/2020.
//

#include "libft.h"

static char ft_isspace(char c)
{
    return ((char)(c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32));
}

int     ft_atoi(const char *nptr)
{
    register unsigned res;
    char sign;

    while (ft_isspace(*nptr))
        nptr++;
    sign = 1;
    if (*nptr == '-' || *nptr == '+')
        if (*nptr++ == '-')
            sign = -1;
    res = 0;
    while (ft_isdigit(*nptr))
    {
        if (res >= 2147483647 && (*nptr - '0') > 7)
            return ((sign == 1) ? -1 : 0);
        res = res * 10 + (*nptr++ - '0');
    }
    return ((int)(res * sign));
}