//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int	ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}