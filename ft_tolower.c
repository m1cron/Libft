//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int		ft_tolower(int c)
{
    return (c >= 65 && c <= 90) ? (c + 32) : c;
}