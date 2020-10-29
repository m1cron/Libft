//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned nbr;

    if (n < 0)
        ft_putchar_fd('-', fd);
    if ((nbr = FT_ABS(n)) > 9)
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putnbr_fd(nbr % 10, fd);
    }
    else
        ft_putchar_fd(nbr + '0', fd);
}