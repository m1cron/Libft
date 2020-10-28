//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int	ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}