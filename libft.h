//
// Created by micron on 28.10.2020.
//

#ifndef LIBFT_LIBFT_H
#define LIBFT_LIBFT_H

# include <string.h>


void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

void    *ft_memchr(const void *s, int c, size_t n);


#endif