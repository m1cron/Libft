//
// Created by micron on 10/29/2020.
//

#include "libft.h"
#include <unistd.h>


void    ft_putendl_fd(char *s, int fd)
{
    if (s)
        write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}
