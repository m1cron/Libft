//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t total;

    total = nmemb * size;
    if (nmemb == 0 || size == 0)
        nmemb = size = 1;
    if ((ptr = malloc(total)))
        ft_bzero(ptr, total);
    return (ptr);
}