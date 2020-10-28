//
// Created by micron on 10/29/2020.
//

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        nmemb = size = 1;
    if ((ptr = malloc(nmemb * size)))
        ft_bzero(ptr, nmemb * size);
    return (ptr);
}