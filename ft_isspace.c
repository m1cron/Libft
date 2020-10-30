//
// Created by micron on 10/30/2020.
//

#include "libft.h"

int ft_isspace(char c)
{
    return ((c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32));
}