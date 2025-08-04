/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *rslt;
    int len;

    if (min >= max)
        return (0);
    len = max - min;
    rslt = malloc(sizeof(int) * len);
    if (!rslt)
        return (0);
    i = 0;
    while (i < len)
    {
        rslt[i] = min + i;
        i++;
    }
    return (rslt);
}
