//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int	ft_isalnum(int c)
{
    return ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')) ? 1 : 0;
}