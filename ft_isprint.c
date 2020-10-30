//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int		ft_isprint(int c)
{
    return (c > 31 && c < 127);
}