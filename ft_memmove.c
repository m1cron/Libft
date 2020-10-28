//
// Created by micron on 28.10.2020.
//

#include "libft.h"

#include <stdio.h>  //Для printf
#include <string.h>   //Для memmove

void    *ft_memmove(void *dest, const void *src, size_t n) // TODO
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d < s)
        return (ft_memcpy(dest, src, n));
    else
        return (ft_memcpy(dest + (n - 1), src + (n - 1), n));
}




int main (void)
{
    unsigned char src[10]="1234567890";
    unsigned char src1[10]="1234567890";

    //printf ("src old: %s\n",src);
    printf ("src old: %s\n",src1);

    //memmove (&src1[4], &src1[3], 3);
    ft_memmove (&src1[4], &src1[3], 3);

    //printf ("src new: %s\n",src);
    printf ("src new: %s\n",src1);

    return 0;
}