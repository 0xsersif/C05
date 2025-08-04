/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 01:58:08 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 03:37:25 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int strlen(char *c)
{
    int i;
    while(c[i])
        i++;
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int splen;
    int leeen;
    char    *rst;
    char    *none;
    if (size == 0)
    {
        *none = malloc(1);
        if (none)
            none[0] = '\0';
        return none;
    }
    i = 0;
    leeen = 0;
    while (i < size)
    {
        leeen += strlen(strs[i]);
            i++;
    }
    splen = strlen(sep);
    leeen += (size - 1) * splen;
    *rst = malloc (leeen + 1);
    if (!rst)
        return (0);
    rst[0] = '\0';
    i = 0;
    while(i < size)
    {
        strcat(rst, strs[i]);
        if (i < size -1)
            strcat(rst, sep);
        i++;
    }
    return (rst);
}