/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:18:26 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:46:48 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	long	size;
	long	i;

	if (min >= max)
		return (NULL);
	size = (long)max - (long)min;
	ptr = (int *) malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = min++;
	return (ptr);
}
