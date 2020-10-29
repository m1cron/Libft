//
// Created by micron on 10/28/2020.
//

#include "libft.h"

int	ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}