//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int		ft_toupper(int c)
{
    return (c >= 97 && c <= 122) ? (c - 32) : c;
}