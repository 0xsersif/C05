/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 01:33:00 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:52:38 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    size = max - min;
    *range = malloc(sizeof(int) * size);
    if (!*range)
        return (-1);
    i = 0;
    while (i < size)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (size);
}