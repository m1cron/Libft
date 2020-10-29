//
// Created by micron on 10/30/2020.
//

#include <unistd.h>
#include "libft.h"

void    ft_putchar(char c)
{
    ft_putchar_fd(c, 1);
}