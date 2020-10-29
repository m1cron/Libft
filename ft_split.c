//
// Created by micron on 10/29/2020.
//

#include "libft.h"

static size_t   ws_count(char const *s, char c)
{
    size_t count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

static void     *leakFix(char **strings, int count)
{
    while (count--)
        free(strings[count]);
    free(strings);
    return (NULL);
}

static size_t   wlen(char const *s, char c)
{
    size_t len;

    len = 0;
    while (*s && *s != c)
        s++, len++;
    return (len);
}

char    **ft_split(char	const *s, char c)
{
    char	**split;
    size_t 		wordsCount;
    size_t		wordLen;
    size_t 		i;
    size_t		j;

    wordsCount = ws_count(s, c);
    if (!s || !(split = (char **)malloc(sizeof(char *) * (wordsCount + 1))))
        return (NULL);
    i = 0;
    while (i < wordsCount)
    {
        while (*s == c)
            s++;
        if (!(split[i] = (char *)malloc(((wordLen = wlen(s, c)) + 1))))
            return (leakFix(split, i));
        j = 0;
        while (j < wordLen)
            split[i][j++] = *s++;
        split[i++][j] = '\0';
    }
    split[i] = NULL;
    return (split);
}